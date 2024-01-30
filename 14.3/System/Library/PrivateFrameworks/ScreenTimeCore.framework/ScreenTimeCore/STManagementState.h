@class NSXPCConnection;

@interface STManagementState : NSObject

@property BOOL cachedShouldRequestMoreTime;
@property BOOL cachedIsRestrictionsPasscodeSet;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) BOOL contactsEditable;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
@property (readonly, nonatomic) BOOL shouldRequestMoreTime;

- (id)init;
- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)contactManagementStateForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (void)communicationPoliciesForDSID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)isExplicitContentRestricted:(id /* block */)a0;
- (id)communicationPoliciesWithError:(id *)a0;
- (void)requestToManageContactsForDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id *)a0;
- (BOOL)setScreenTimeEnabled:(BOOL)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)a0 error:(id *)a1;
- (BOOL)clearRestrictionsPasscodeWithError:(id *)a0;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)isRestrictionsPasscodeSet:(id /* block */)a0;
- (BOOL)performMigrationFromMCXSettings:(id)a0 error:(id *)a1;
- (void)shouldRequestMoreTime:(id /* block */)a0;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (void)setManageContactsEnabled:(BOOL)a0 forDSID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)enableScreenTimeForDSID:(id)a0 error:(id *)a1;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)a0 error:(id *)a1;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)a0;

@end
