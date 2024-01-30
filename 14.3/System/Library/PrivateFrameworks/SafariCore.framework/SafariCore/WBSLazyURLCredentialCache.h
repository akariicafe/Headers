@interface WBSLazyURLCredentialCache : WBSURLCredentialCache

- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;
- (id)credentials;
- (void)invalidate;

@end
