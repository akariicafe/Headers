@class WFLocation;

@interface WFAggregateForecastRequest : WFTask

@property (copy, nonatomic) WFLocation *location;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)handleCancellation;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;

@end
