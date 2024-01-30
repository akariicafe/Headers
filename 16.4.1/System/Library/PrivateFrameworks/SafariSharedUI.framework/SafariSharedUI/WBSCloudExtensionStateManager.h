@class WBSPeriodicActivityScheduler, NSArray, NSDictionary, NSMutableArray;

@interface WBSCloudExtensionStateManager : NSObject {
    BOOL _hasSuccessfullyUpdatedCloudExtensionStatesAtLeastOnce;
    NSMutableArray *_stateProviders;
    NSDictionary *_cloudExtensionStates;
    NSArray *_cloudDevices;
    BOOL _isCloudExtensionStateAccurateOnThisDevice;
    WBSPeriodicActivityScheduler *_inactiveDevicePruningScheduler;
    WBSPeriodicActivityScheduler *_periodicDeviceSavingScheduler;
}

@property (class, readonly, nonatomic) WBSCloudExtensionStateManager *sharedManager;

@property (nonatomic) long long manateeState;
@property (nonatomic, getter=isExtensionSyncEnabled) BOOL extensionSyncEnabled;

+ (id)_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (BOOL)test_determineEnabledStateFromCloudExtensionState:(id)a0;
+ (id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)test_uuidStringsOfInactiveCloudDevices:(id)a0 currentDeviceUUIDString:(id)a1;
+ (id)_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)_singleExtensionStates:(id)a0 withStateRemovedForDeviceWithUUIDString:(id)a1;
+ (id)test_removeDeviceWithUUIDString:(id)a0 fromCloudDevices:(id)a1;
+ (BOOL)_determineEnabledStateFromCloudExtensionState:(id)a0;
+ (id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;
+ (id)test_determineNewTabPageFromCloudDeviceState:(id)a0;
+ (id)test_removeStatesForDeviceWithUUIDString:(id)a0 fromCloudExtensionStates:(id)a1;

- (void)addProvider:(id)a0;
- (void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
- (BOOL)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
- (void)_schedulePruningOfInactiveDevices;
- (void)_deleteCurrentDeviceFromCloudKit;
- (void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id /* block */)a0;
- (id)_composedIdentifierForBundleIdentifier:(id)a0 relatedToComposedIdentifier:(id)a1;
- (id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)a0;
- (BOOL)isExtensionEnabledInCloudWithComposedIdentifier:(id)a0;
- (BOOL)_cloudStateMatchesLocalStateForCurrentDevice;
- (void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id /* block */)a0;
- (id)_cloudExtensionStateForComposedIdentifiers:(id)a0;
- (void)updateNewTabPageFromCloudDeviceState;
- (void)_ensureCurrentDeviceIsSavedPeriodically;
- (void)localExtensionStateDidChange;
- (void)_cloudExtensionStatesWereUpdated;
- (id)_extensionStatesDictionaryForCurrentDevice;
- (BOOL)_hasInstalledApplicationWithIdentifier:(id)a0;
- (id)init;
- (id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)a0;
- (void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)_updateStateProvidersFromCloudExtensionState;
- (void)_saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)a0;
- (void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_extensionDeviceDictionaryForCurrentDevice;
- (id)extensionAppsFromOtherDevices;
- (void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
