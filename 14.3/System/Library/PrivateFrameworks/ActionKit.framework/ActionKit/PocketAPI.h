@class NSString, NSOperationQueue, PocketAPILogin;

@interface PocketAPI : NSObject {
    PocketAPILogin *currentLogin;
    NSString *userAgent;
}

@property (retain, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) NSString *URLScheme;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic, getter=isLoggedIn) BOOL loggedIn;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)pkt_hashForConsumerKey:(id)a0 accessToken:(id)a1;
+ (id)sharedAPI;
+ (id)pocketAppURLScheme;

- (unsigned long long)appID;
- (id)init;
- (void)dealloc;
- (void)logout;
- (BOOL)handleOpenURL:(id)a0;
- (void)loginWithDelegate:(id)a0;
- (void)saveURL:(id)a0 delegate:(id)a1;
- (void)saveURL:(id)a0 withTitle:(id)a1 delegate:(id)a2;
- (void)saveURL:(id)a0 withTitle:(id)a1 tweetID:(id)a2 delegate:(id)a3;
- (void)callAPIMethod:(id)a0 withHTTPMethod:(int)a1 arguments:(id)a2 delegate:(id)a3;
- (id)saveOperationWithURL:(id)a0 title:(id)a1 tweetID:(id)a2 delegate:(id)a3;
- (id)saveOperationWithURL:(id)a0 title:(id)a1 delegate:(id)a2;
- (id)saveOperationWithURL:(id)a0 delegate:(id)a1;
- (id)methodOperationWithAPIMethod:(id)a0 forHTTPMethod:(int)a1 arguments:(id)a2 delegate:(id)a3;
- (void)loginWithHandler:(id /* block */)a0;
- (void)saveURL:(id)a0 handler:(id /* block */)a1;
- (void)saveURL:(id)a0 withTitle:(id)a1 handler:(id /* block */)a2;
- (void)saveURL:(id)a0 withTitle:(id)a1 tweetID:(id)a2 handler:(id /* block */)a3;
- (void)callAPIMethod:(id)a0 withHTTPMethod:(int)a1 arguments:(id)a2 handler:(id /* block */)a3;
- (id)saveOperationWithURL:(id)a0 handler:(id /* block */)a1;
- (id)saveOperationWithURL:(id)a0 title:(id)a1 handler:(id /* block */)a2;
- (id)saveOperationWithURL:(id)a0 title:(id)a1 tweetID:(id)a2 handler:(id /* block */)a3;
- (id)methodOperationWithAPIMethod:(id)a0 forHTTPMethod:(int)a1 arguments:(id)a2 handler:(id /* block */)a3;
- (id)pkt_getToken;
- (void)pkt_loggedInWithUsername:(id)a0 token:(id)a1;
- (id)pkt_loadCurrentLoginFromDefaults;
- (void)pkt_saveCurrentLoginToDefaults;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)a0 password:(id)a1 delegate:(id)a2;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)a0 password:(id)a1 handler:(id /* block */)a2;
- (id)pkt_actionDictionaryWithName:(id)a0 parameters:(id)a1;
- (id)pkt_userAgent;
- (id)pkt_deviceName;
- (id)pkt_deviceOSVersion;
- (void)pkt_setKeychainValue:(id)a0 forKey:(id)a1;
- (id)pkt_getKeychainValueForKey:(id)a0;
- (void)pkt_setKeychainValue:(id)a0 forKey:(id)a1 serviceName:(id)a2;
- (id)pkt_getKeychainValueForKey:(id)a0 serviceName:(id)a1;

@end
