@class NSString, NSArray, NFPromise, ACAccount, ACAccountStore, NSHashTable;

@interface FCAppleAccount : NSObject <FCAppleAccount> {
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_overrideContentStoreFrontID;
    NFPromise *_base64GSTokenPromise;
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *userStoreFrontID;
@property (copy, nonatomic) NSString *contentStoreFrontID;
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
@property (readonly, nonatomic) NSString *primaryEmailAddress;
@property (readonly, nonatomic) NSString *appStoreEmailAddress;
@property (readonly, nonatomic) NSArray *allEmailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableStoreFrontLocking;
+ (id)sharedAccount;

- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x0; long long x1; })a0 macOSVersion:(struct { long long x0; long long x1; })a1 orInactiveForTimeInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getGSTokenWithCompletionHandler:(id /* block */)a0;
- (BOOL)isUserSignedIntoiTunes;
- (void)invalidateGSTokenCache;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(struct { long long x0; long long x1; })a0 orInactiveForTimeInterval:(double)a1 completionHandler:(id /* block */)a2;
- (id)getGSToken;
- (void)t_startOverridingContentStoreFrontID:(id)a0;
- (id)iCloudAccountDSID;
- (void)_accountStoreDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)loadStoreFrontWithCompletionHandler:(id /* block */)a0;
- (id)currentStoreFrontID;
- (void)reloadiTunesAccount;
- (void)t_stopOverridingContentStoreFrontID;
- (id)iTunesAccountDSID;
- (void)_reloadAccountsFromAccountStore;
- (id)iTunesAccountName;
- (BOOL)isPrimaryAccountEmailAddress;

@end
