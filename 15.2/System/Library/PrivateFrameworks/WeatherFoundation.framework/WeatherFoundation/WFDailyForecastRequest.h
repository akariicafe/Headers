@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;

@end
