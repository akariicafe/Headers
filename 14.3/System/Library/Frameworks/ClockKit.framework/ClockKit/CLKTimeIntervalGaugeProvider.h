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
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 startDate:(id)a3 startFillFraction:(float)a4 endDate:(id)a5 endFillFraction:(float)a6;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 startDate:(id)a3 endDate:(id)a4;

- (BOOL)paused;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validate;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (double)progressFractionForNow:(id)a0;
- (BOOL)needsTimerUpdates;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)a0;
- (void)_maybeStartOrStopUpdates;

@end
