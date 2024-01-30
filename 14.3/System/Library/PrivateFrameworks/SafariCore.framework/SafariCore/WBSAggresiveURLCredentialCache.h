@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (id)initWithCredentialFetchBlock:(id /* block */)a0;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;
- (id)credentials;
- (void)invalidate;

@end
