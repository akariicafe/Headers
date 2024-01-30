@interface WFFavoriteLocationRequest : WFTask

@property (readonly, nonatomic) id /* block */ resultHandler;

- (id)initWithResultHandler:(id /* block */)a0;
- (void)handleResponse:(id)a0;
- (void)handleCancellation;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;

@end
