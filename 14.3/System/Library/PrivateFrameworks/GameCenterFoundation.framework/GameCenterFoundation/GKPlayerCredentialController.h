@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property long long loginCancelledCount;
@property (readonly) BOOL loginDisabled;

+ (id)accessQueue;
+ (id)sharedController;
+ (void)migrateOldAccountInformation;

- (void)invalidateCredentialCaches;
- (id)accessQueue;
- (id)init;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)getAltDSIDFromIDMSForCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (void)dealloc;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (id)_transactAndWait:(id /* block */)a0;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (void)accountStoreDidChange:(id)a0;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)suggestedUsername;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)pushCredentialForEnvironment:(long long)a0;
- (void)accountStoreEmailDidChange:(id)a0;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (unsigned long long)loginStatusForCredential:(id)a0;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;

@end
