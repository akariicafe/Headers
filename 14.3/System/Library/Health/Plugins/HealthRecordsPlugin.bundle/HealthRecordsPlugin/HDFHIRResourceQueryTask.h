@class NSDictionary, HDFHIRResourceSchema;

@interface HDFHIRResourceQueryTask : HDFHIRResourceTask

@property (readonly, copy, nonatomic) NSDictionary *bindings;
@property (readonly, copy, nonatomic) id /* block */ queryCompletion;
@property (readonly, nonatomic) long long queryMode;
@property (readonly, copy, nonatomic) HDFHIRResourceSchema *resourceSchema;

- (void).cxx_destruct;
- (void)handleError:(id)a0 endState:(id)a1;
- (void)handleResponse:(id)a0 JSONData:(id)a1 endState:(id)a2;
- (id)createURLRequestWithCredentialResult:(id)a0 error:(id *)a1;
- (id)initWithCredentialedSession:(id)a0 resourceSchema:(id)a1 queryMode:(long long)a2 bindings:(id)a3 completion:(id /* block */)a4;

@end
