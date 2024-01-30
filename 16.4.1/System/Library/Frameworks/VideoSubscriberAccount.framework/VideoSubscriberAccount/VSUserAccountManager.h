@class NSString, VSUserAccountServiceConnection, VSRemoteNotifier;

@interface VSUserAccountManager : NSObject <VSRemoteNotifierDelegate>

@property (class, readonly, nonatomic) VSUserAccountManager *sharedUserAccountManager;

@property (retain, nonatomic) VSUserAccountServiceConnection *connection;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)queryUserAccountsWithOptions:(long long)a0 completion:(id /* block */)a1;
- (void)updateUserAccount:(id)a0 completion:(id /* block */)a1;

@end
