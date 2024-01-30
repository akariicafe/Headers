@class UIColor, NSMutableDictionary, CLKClockTimerToken;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_timerToken;
    BOOL _finalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIColor *tintColor;
@property double backgroundRingAlpha;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL needsTimerUpdates;

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)validate;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (void)_validate;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (BOOL)isEqual:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (long long)timeTravelUpdateFrequency;
- (double)progressFractionForNow:(id)a0;
- (id)JSONObjectRepresentation;
- (void)_maybeStartOrStopUpdates;
- (double)_progressFractionForNow:(id)a0;
- (BOOL)_needsUpdates;

@end
