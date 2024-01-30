@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (id)credentials;
- (void)invalidate;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;
- (id)initWithCredentialFetchBlock:(id /* block */)a0;

@end
