@interface CSPrivateIndexConnection : CSIndexConnection

+ (void)removePrivateIndexConnectionForToken:(id)a0;
+ (id)privateIndexConnectionForToken:(id)a0;

- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
