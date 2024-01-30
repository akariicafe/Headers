@interface HMDelegateCaller : NSObject

+ (id)delegateCallerWithOperationQueue:(id)a0;

- (void)callCompletion:(id /* block */)a0 error:(id)a1;
- (void)callCompletion:(id /* block */)a0 invitations:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 room:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 dictionary:(id)a2;
- (void)callCompletion:(id /* block */)a0 value:(BOOL)a1 conflictName:(id)a2 error:(id)a3;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)callCompletion:(id /* block */)a0 service:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 boolValue:(BOOL)a2 array:(id)a3;
- (void)callCompletion:(id /* block */)a0 value:(BOOL)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 array:(id)a2;
- (void)callCompletion:(id /* block */)a0 serviceGroup:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 isUsingHomeKit:(BOOL)a1 isUsingCloudServices:(BOOL)a2 error:(id)a3;
- (void)callCompletion:(id /* block */)a0 zone:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 proxiedDevice:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 obj:(id)a2;
- (void)callCompletion:(id /* block */)a0 obj:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 array:(id)a1 additionalAccessoryInfo:(id)a2 error:(id)a3;
- (void)callCompletion:(id /* block */)a0 array:(id)a1;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 mediaSystem:(id)a2;
- (void)invokeBlock:(id /* block */)a0;
- (void)callCompletion:(id /* block */)a0 errorString:(id)a1;
- (id)_localizedError:(id)a0;
- (void)callCompletion:(id /* block */)a0 home:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 actionSet:(id)a1 error:(id)a2;
- (void)callCompletion:(id /* block */)a0 error:(id)a1 snapshot:(id)a2;
- (void)callCompletion:(id /* block */)a0 user:(id)a1 error:(id)a2;

@end
