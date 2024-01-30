@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForAccountChangeType:(int)a0;
+ (BOOL)_shouldRemoveModifiedAccount:(id)a0;
+ (BOOL)_shouldSignOutOfModifiedAccount:(id)a0;
+ (void)_postAccountsChangedNotification;
+ (void)_postAccountsChangedInternalNotification;
+ (id)_activeStorefrontIdentifier;
+ (void)_setActiveStorefrontIdentifier:(id)a0;
+ (void)_updateLocalAccountStorefrontIfNeededForAccount:(id)a0 store:(id)a1;
+ (void)_logDeltasForCookies:(id)a0 oldCookies:(id)a1;
+ (BOOL)_shouldProcessChangeForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2;
+ (void)_removeAccount:(id)a0;
+ (void)_postStorefrontChangedNotification;
+ (id)_mergeCookiesForAccount:(id)a0 oldAccount:(id)a1;
+ (void)_postStorefontChangedNotificationIfNeededForAccount:(id)a0 oldAccount:(id)a1 store:(id)a2;
+ (void)_postAccountsChangedNotificationsIfNeededForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2;
+ (void)_postActiveAccountChangedNotification;
+ (void)_saveAccount:(id)a0;

- (void)_resetDeviceOffersIfNeeded;
- (void)_resetMusicSpecificPreferences;
- (void)_logoutOfAccount:(id)a0 store:(id)a1;
- (void)_processAccountFlagsForAccount:(id)a0 oldAccount:(id)a1;
- (void)_processiTunesAccountAddition:(id)a0 inStore:(id)a1;
- (BOOL)_handleLocalAccountLogicForAccountWillChange:(id)a0;
- (void)_processPrivacyAcknowledgementForAccount:(id)a0 oldAccount:(id)a1;
- (BOOL)_handleCookieLogicForAccountWillChange:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_resetSpringBoardDefaultPNGSnapshots;
- (BOOL)_handlePrivacyAcknowledgementLogicForAccountWillChange:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_processAccountAddition:(id)a0 inStore:(id)a1;
- (BOOL)_canSaveAccount:(id)a0 withOtherAccounts:(id)a1;
- (void)_processiTunesAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_processAccountDeletion:(id)a0 inStore:(id)a1;
- (void)_deactivateAllAccountsExcept:(id)a0 inStore:(id)a1;
- (id)_fetchPersonaIDIfCurrentPersonaIsEnterprise;
- (BOOL)_mergeLocalPrivacyAcknowledgementIntoAccount:(id)a0 withStore:(id)a1;
- (BOOL)_handleStorefrontLogicForAccountWillChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_handleMultiUserLogicForAccountWillChange:(id)a0;
- (id)init;
- (void)_processNotificationsForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2 store:(id)a3;
- (BOOL)_handleAccountMediaTypeLogicForAccountWillChange:(id)a0;
- (void)_resetBiometricsForAccount:(id)a0;
- (void)_resetSubscriptionStatusForAccount:(id)a0;
- (void)_resetFollowUpsForAccount:(id)a0;
- (BOOL)_handleSandboxAccountLogicForAccountWillChange:(id)a0 inStore:(id)a1;
- (void)_processAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (BOOL)_handleUserManagementLogicForAccountWillChange:(id)a0 changeType:(int)a1;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_resetStoreDownloadQueue;
- (void)_processIDMSAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_logDirtyPropertiesForAccount:(id)a0 oldAccount:(id)a1;
- (void)_processiCloudAccountAddition:(id)a0 inStore:(id)a1;
- (BOOL)_handleRemoteDeviceChangeLogicForAccountWillChange:(id)a0 oldAccount:(id)a1;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
