@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void)authenticateBatteryWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateVeridianWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2;
- (void)signVeridianChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
