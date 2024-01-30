@class HKOAuth2TokenSession;

@interface HDFHIRAccessTokenTask : HDFHIRRequestTask

@property (readonly, copy, nonatomic) HKOAuth2TokenSession *tokenSession;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)handleError:(id)a0 endState:(id)a1;
- (void)createURLRequestWithCompletion:(id /* block */)a0;
- (void)handleResponse:(id)a0 JSONData:(id)a1 endState:(id)a2;
- (id)errorForRequest:(id)a0 response:(id)a1 data:(id)a2;
- (id)initWithTokenSession:(id)a0 FHIRSession:(id)a1 completion:(id /* block */)a2;

@end
