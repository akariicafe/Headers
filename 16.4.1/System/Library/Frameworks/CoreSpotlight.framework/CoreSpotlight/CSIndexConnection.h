@interface CSIndexConnection : CSXPCConnection

+ (id)sharedConnectionForUser:(unsigned int)a0;

- (void)handleError:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
