@interface WFFavoriteLocationRequest : WFTask

@property (readonly, nonatomic) id /* block */ resultHandler;

- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResultHandler:(id /* block */)a0;

@end
