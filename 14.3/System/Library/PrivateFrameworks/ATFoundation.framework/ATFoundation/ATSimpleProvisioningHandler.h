@interface ATSimpleProvisioningHandler : ATProvisioningHandler

- (void)_processProvisioningRequest:(id)a0 withParams:(id)a1 onMessageLink:(id)a2 withCompletion:(id /* block */)a3;
- (void)_processProvisioningResponse:(id)a0 withParams:(id)a1 onMessageLink:(id)a2 withCompletion:(id /* block */)a3;
- (id)_paramsForRequest:(id)a0;

@end
