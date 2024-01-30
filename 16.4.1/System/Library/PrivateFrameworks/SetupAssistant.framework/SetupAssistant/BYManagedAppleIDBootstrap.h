@class UMUserSwitchContext, NSDictionary, NSString, AKAppleIDAuthenticationContext, NSObject, BYPreferencesController;
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
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
@property (readonly, copy, nonatomic) NSString *shortLivedToken;
@property (readonly, nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (BOOL)isFirstTimeLogin;
+ (BOOL)isManagedAppleIDSignedIn;
+ (BOOL)isMultiUser;
+ (BOOL)isSettingUpMultiUser;
+ (id)delegateBundleIDsForManagedAccount;

- (void)willSwitchUser;
- (BOOL)isLoginUser;
- (void)userSwitchContextHasBeenUsed;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)recoverEMCSWithCompletion:(id /* block */)a0;
- (void)switchToLoginWindowDueToError:(id)a0 completion:(id /* block */)a1;
- (BOOL)needsToUpgradeShortLivedToken;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)a0;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1 willNotCompleteBlock:(id /* block */)a2;
- (void)_modifyAuthenticationContextIfNeeded:(id)a0;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)_createAppleAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_runPostStartupTasksWithAccountStore:(id)a0 completion:(id /* block */)a1;
- (id)_languageConfigurationDictionary;
- (id)_fetchAKURLBagSynchronously;
- (id)_authenticationContextWithAuthenticationResults:(id)a0;
- (void)ingestManagedBuddyData;
- (void)postUserSwitchContextHasBeenUsed;
- (id)init;
- (void)_registerForStartupCompletionNotificationWithTask:(id /* block */)a0;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
