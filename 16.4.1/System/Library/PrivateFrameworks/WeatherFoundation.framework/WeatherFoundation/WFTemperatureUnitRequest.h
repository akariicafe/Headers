@interface WFTemperatureUnitRequest : WFTask

@property (copy, nonatomic) id /* block */ resultHandler;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (BOOL)requiresResponse;
- (void)handleCancellation;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithResultHandler:(id /* block */)a0;

@end
