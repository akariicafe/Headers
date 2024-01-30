@interface VSApplicationControllerResponseHandler : NSObject

- (id)_parseSAMLResponseString:(id)a0 error:(id *)a1;
- (id)_accountAuthenticationWithJavascriptResponse:(id)a0 error:(id *)a1;
- (void)_handleJavascriptResponseInternal:(id)a0 requestType:(long long)a1 accountAuthentication:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setSubscriptionDataWithResponse:(id)a0 forJavascriptResponse:(id)a1;
- (void)handleJavascriptResponse:(id)a0 requestType:(long long)a1 completionHandler:(id /* block */)a2;

@end
