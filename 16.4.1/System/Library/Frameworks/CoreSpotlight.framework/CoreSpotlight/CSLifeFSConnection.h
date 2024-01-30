@interface CSLifeFSConnection : CSXPCConnection

+ (id)sharedConnection;

- (void)handleError:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
