@class NSString;

@interface HPSAppleConnectController : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL isCarryOrLiveOnUser;

+ (id)sharedInstance;

- (void)setAccountID:(id)a0;
- (void)setPassword:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)clearCredentialsSyncToKeychain:(BOOL)a0;
- (void)tokenWithError:(id /* block */)a0;
- (void)_readCachedCredentials;
- (void)_saveCredentials;
- (void)setAccountID:(id)a0 password:(id)a1 syncToKeychain:(BOOL)a2;

@end
