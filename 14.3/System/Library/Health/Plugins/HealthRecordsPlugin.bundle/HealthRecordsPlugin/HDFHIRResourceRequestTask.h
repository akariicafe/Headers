@class NSURL, HDFHIRResourceSchema;

@interface HDFHIRResourceRequestTask : HDFHIRResourceTask

@property (readonly, copy, nonatomic) id /* block */ queryCompletion;
@property (readonly, copy, nonatomic) HDFHIRResourceSchema *resourceSchema;
@property (readonly, copy, nonatomic) NSURL *requestURL;

- (void).cxx_destruct;
- (void)handleError:(id)a0 endState:(id)a1;
- (void)handleResponse:(id)a0 JSONData:(id)a1 endState:(id)a2;
- (id)createURLRequestWithCredentialResult:(id)a0 error:(id *)a1;
- (id)initWithCredentialedSession:(id)a0 resourceSchema:(id)a1 requestURL:(id)a2 completion:(id /* block */)a3;

@end
