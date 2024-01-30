@interface CSPrivateIndexConnection : CSIndexConnection

+ (id)privateIndexConnectionForToken:(id)a0;
+ (void)removePrivateIndexConnectionForToken:(id)a0;

- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
