@interface MSOpenCompose : MSXPCService

@property (class, readonly, nonatomic) MSOpenCompose *sharedInstance;

+ (void)presentNewMailWithContext:(id)a0 delegateEndpoint:(id)a1 completion:(id /* block */)a2;

- (id)init;

@end
