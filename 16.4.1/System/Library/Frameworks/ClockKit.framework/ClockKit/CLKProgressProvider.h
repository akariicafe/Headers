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
- (void)_commonInit;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_validate;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (double)progressFractionForNow:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (long long)timeTravelUpdateFrequency;
- (void)_maybeStartOrStopUpdates;
- (BOOL)_needsUpdates;
- (double)_progressFractionForNow:(id)a0;

@end
