@interface ICMusicKitURLResponseHandler : ICURLResponseHandler

- (void)_updateRequest:(id)a0 forProcessedResponseOfStoreURLRequest:(id)a1;
- (void)_invalidateDeveloperTokenForInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_invalidateUserTokenForInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)processInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)processCompletedResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
