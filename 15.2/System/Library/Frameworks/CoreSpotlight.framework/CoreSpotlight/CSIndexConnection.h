@interface CSIndexConnection : CSXPCConnection

@property (readonly, nonatomic) BOOL previouslyInitialized;

+ (id)sharedConnection;

- (void)handleError:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
