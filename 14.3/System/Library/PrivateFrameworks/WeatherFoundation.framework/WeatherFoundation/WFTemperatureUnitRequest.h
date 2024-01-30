@interface WFTemperatureUnitRequest : WFTask

@property (copy, nonatomic) id /* block */ resultHandler;

- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)startWithService:(id)a0;
- (void)handleCancellation;
- (BOOL)requiresResponse;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResultHandler:(id /* block */)a0;

@end
