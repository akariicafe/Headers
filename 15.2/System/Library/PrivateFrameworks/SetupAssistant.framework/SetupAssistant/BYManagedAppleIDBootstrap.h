@class UMUserSwitchContext, NSDictionary, NSString, AKAppleIDAuthenticationContext, NSObject;
@protocol OS_dispatch_queue;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder> {
    AKAppleIDAuthenticationContext *_authContext;
    UMUserSwitchContext *_userSwitchContext;
}

@property (readonly, nonatomic) UMUserSwitchContext *userSwitchContext;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldRetrySilentLoginUpgrade;
@property (nonatomic) long long silentLoginUpgradeRetryCount;
@property (retain, nonatomic) NSDictionary *authenticationResults;
@property (readonly, copy, nonatomic) NSString *shortLivedToken;
@property (readonly, nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSettingUpMultiUser;
+ (id)sharedManager;
+ (BOOL)isFirstTimeLogin;
+ (BOOL)isManagedAppleIDSignedIn;
+ (BOOL)isMultiUser;
+ (id)delegateBundleIDsForManagedAccount;

- (void)ingestManagedBuddyData;
- (BOOL)isLoginUser;
- (id)_languageConfigurationDictionary;
- (void)_modifyAuthenticationContextIfNeeded:(id)a0;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1 willNotCompleteBlock:(id /* block */)a2;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)_createAppleAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_fetchAKURLBagSynchronously;
- (void)_registerForStartupCompletionNotificationWithTask:(id /* block */)a0;
- (void)_runPostStartupTasksWithAccountStore:(id)a0 completion:(id /* block */)a1;
- (id)_authenticationContextWithAuthenticationResults:(id)a0;
- (void)recoverEMCSWithCompletion:(id /* block */)a0;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)a0;
- (void)willSwitchUser;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)postUserSwitchContextHasBeenUsed;
- (void)dealloc;
- (BOOL)needsToUpgradeShortLivedToken;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)switchToLoginWindowDueToError:(id)a0 completion:(id /* block */)a1;
- (void)userSwitchContextHasBeenUsed;

@end
