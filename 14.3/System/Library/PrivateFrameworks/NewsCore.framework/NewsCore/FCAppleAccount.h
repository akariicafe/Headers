@class NSString, NSArray, NFPromise, ACAccountStore, ACAccount, NSHashTable;

@interface FCAppleAccount : NSObject <FCAppleAccount>

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain) ACAccount *primaryAccount;
@property (retain) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *userStoreFrontID;
@property (copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, nonatomic) NSArray *supportedLanguageCodes;
@property (copy, nonatomic) NSString *overrideContentStoreFrontID;
@property (retain, nonatomic) NFPromise *base64GSTokenPromise;
@property (readonly, nonatomic) NSHashTable *observers;
@property (getter=isRunningPPT) BOOL runningPPT;
@property (readonly, nonatomic) NSString *primaryLanguageCode;
@property (readonly, nonatomic) long long supportedContentLanguage;
@property (readonly, nonatomic) BOOL isContentStoreFrontSupported;
@property (readonly, nonatomic) BOOL isSignedInStoreFrontSupported;
@property (readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property (readonly, nonatomic, getter=isUserSignedInToiCloud) BOOL userSignedInToiCloud;
@property (readonly, nonatomic) NSString *endpointConnectionClientID;
@property (readonly, nonatomic) ACAccount *activeiTunesAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;

- (void)loadStoreFrontWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isUserSignedIntoiTunes;
- (id)iCloudAccountDSID;
- (void)removeObserver:(id)a0;
- (void)_accountStoreDidChange;
- (void)_reloadAccountsFromAccountStore;
- (void)t_startOverridingContentStoreFrontID:(id)a0;
- (void)notifyObserversOfAccountChange;
- (void)addObserver:(id)a0;
- (void)getGSTokenWithCompletionHandler:(id /* block */)a0;
- (id)getGSToken;
- (id)currentStoreFrontID;
- (void)reloadiTunesAccount;
- (id)iTunesAccountDSID;
- (id)getNewGSTokenPromise;
- (void)invalidateGSTokenCache;
- (void)_handleAccountChangeWithOldPrimaryAccount:(id)a0 oldiTunesAccount:(id)a1;
- (id)iTunesAccountName;
- (BOOL)isPrimaryAccountEmailAddress;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(struct { long long x0; long long x1; })a0 orInactiveForTimeInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)t_stopOverridingContentStoreFrontID;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x0; long long x1; })a0 macOSVersion:(struct { long long x0; long long x1; })a1 orInactiveForTimeInterval:(double)a2 completionHandler:(id /* block */)a3;

@end
