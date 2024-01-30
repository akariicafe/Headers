@class CLKClockTimerToken, NSMutableDictionary, NSDate;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_timerToken;
    BOOL _paused;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) float startFillFraction;
@property (nonatomic) float endFillFraction;

+ (BOOL)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 startDate:(id)a3 endDate:(id)a4;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 startDate:(id)a3 startFillFraction:(float)a4 endDate:(id)a5 endFillFraction:(float)a6;

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)paused;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_update;
- (unsigned long long)hash;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (void)stopUpdatesForToken:(id)a0;
- (double)progressFractionForNow:(id)a0;
- (BOOL)needsTimerUpdates;
- (id)initWithJSONObjectRepresentation:(id)a0;
- (void)_maybeStartOrStopUpdates;

@end
