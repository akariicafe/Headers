@class NSLocale;

@interface WFHourlyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;
- (id)description;

@end
