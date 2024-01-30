@class NSXPCConnection;

@interface LKLoginController : NSObject <LKLoginDaemonProtocol>

@property (retain) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)sharedController;

- (id)proxy;
- (void).cxx_destruct;
- (id)init;
- (void)checkInWithCurrentEnvironment:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)chooseUserWithIdentifier:(id)a0 inClassWithID:(id)a1 password:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)loginAppleID:(id)a0 password:(id)a1 localLoginOnly:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (void)saveClassConfiguration:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)triggerLocalUserSwitchTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3 completionHandler:(id /* block */)a4;
- (void)interruptLocalUserSwitchTest;
- (void)isReadyToLoginWithCompletionHandler:(id /* block */)a0;
- (void)isReadyToLogoutWithCompletionHandler:(id /* block */)a0;
- (void)updateGlobalDefaultsValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)logoutWithLogoutType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)recentUsers;

@end
