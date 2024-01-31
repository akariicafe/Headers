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

- (void)_update;
- (BOOL)validate;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
