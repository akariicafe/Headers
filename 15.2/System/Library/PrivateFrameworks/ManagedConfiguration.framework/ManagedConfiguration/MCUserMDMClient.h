@interface MCUserMDMClient : NSObject

+ (id)sharedClient;

- (id)pushToken;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;

@end
