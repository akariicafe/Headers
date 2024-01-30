@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (void)invalidate;
- (id)credentials;
- (id)initWithCredentialFetchBlock:(id /* block */)a0;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;

@end
