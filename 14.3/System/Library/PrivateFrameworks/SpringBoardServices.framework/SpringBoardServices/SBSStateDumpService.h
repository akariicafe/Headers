@interface SBSStateDumpService : SBSAbstractSystemService

- (void)disableRemoteStateDumpWithCompletion:(id /* block */)a0;
- (void)enableRemoteStateDumpWithTimeout:(long long)a0 completion:(id /* block */)a1;
- (void)requestStateDump:(unsigned long long)a0 withCompletion:(id /* block */)a1;

@end
