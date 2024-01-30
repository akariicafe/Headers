@class ACAccountStore;

@interface AADataclassManager : NSObject {
    ACAccountStore *_store;
}

@property (class, readonly) AADataclassManager *sharedManager;

+ (id)appBundleIdentifierDictionary;

- (id)initWithAccountStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_filteredDataclassesForAccountClass:(id)a0;
- (BOOL)_hideDataclassWhenAppRemoved:(id)a0;
- (BOOL)_isRestrictedForDataclass:(id)a0;
- (id)_nonVisibleServiceDataclass;
- (BOOL)_shouldProvisionNotesForAccount:(id)a0;
- (BOOL)_shouldProvisionRemindersForAccount:(id)a0;
- (id)_userVisibleDataclasses;
- (id)appBundleIdentifierForDataclass:(id)a0;
- (id)blackListedMacOSDataclasses;
- (id)buildAutoEnableableDataclassesAndActionsForAccount:(id)a0 dataclassesForEnablement:(id)a1;
- (BOOL)canAutoEnableDataclass:(id)a0 forAccount:(id)a1;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)a0 completion:(id /* block */)a1;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)a0 fromAccount:(id)a1 completion:(id /* block */)a2;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:(id)a0;
- (id)filteredServerProvidedFeatures:(id)a0 forAccount:(id)a1;
- (BOOL)isDataclassActionSafeForAutoEnablement:(id)a0;
- (BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)a0;
- (BOOL)shouldProvisionDataclass:(id)a0 forAccount:(id)a1;
- (id)whitelistedDataclassesForAppleAccountClassBasic;
- (id)whitelistedDataclassesForAppleAccountClassFull;

@end
