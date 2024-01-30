@interface HDFHIRResourceTask : HDFHIRCredentialedRequestTask

- (void)createURLRequestWithCompletion:(id /* block */)a0;
- (id)errorForRequest:(id)a0 response:(id)a1 data:(id)a2;
- (id)createURLRequestWithCredentialResult:(id)a0 error:(id *)a1;

@end
