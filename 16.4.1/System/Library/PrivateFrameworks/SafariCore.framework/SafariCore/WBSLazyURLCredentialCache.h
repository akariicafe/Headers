@interface WBSLazyURLCredentialCache : WBSURLCredentialCache

- (id)credentials;
- (void)invalidate;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;

@end
