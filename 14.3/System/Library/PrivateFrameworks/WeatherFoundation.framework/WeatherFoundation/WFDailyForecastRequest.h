@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;
- (id)description;

@end
