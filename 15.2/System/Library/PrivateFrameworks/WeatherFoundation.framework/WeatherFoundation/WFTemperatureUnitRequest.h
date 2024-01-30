@interface WFTemperatureUnitRequest : WFTask

@property (copy, nonatomic) id /* block */ resultHandler;

- (id)initWithResultHandler:(id /* block */)a0;
- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)handleCancellation;
- (BOOL)requiresResponse;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;

@end
