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

- (id)_transactAndWait:(id /* block */)a0;
- (unsigned long long)loginStatusForCredential:(id)a0;
- (id)accessQueue;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)pushCredentialForEnvironment:(long long)a0;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)getAltDSIDFromIDMSForCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountStoreDidChange:(id)a0;
- (void)invalidateCredentialCaches;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (id)suggestedUsername;
- (void)accountStoreEmailDidChange:(id)a0;

@end
