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

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (void)_validate;
- (void)finalize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)_update;
- (unsigned long long)hash;
- (void)dealloc;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (void)stopUpdatesForToken:(id)a0;
- (long long)timeTravelUpdateFrequency;
- (double)progressFractionForNow:(id)a0;
- (void)_maybeStartOrStopUpdates;
- (double)_progressFractionForNow:(id)a0;
- (BOOL)_needsUpdates;

@end
