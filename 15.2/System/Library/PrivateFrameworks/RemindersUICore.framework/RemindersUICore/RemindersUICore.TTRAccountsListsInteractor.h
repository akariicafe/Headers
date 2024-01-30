@interface RemindersUICore.TTRAccountsListsInteractor : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ isSettingSmartListsDisplayOrder;
    void /* unknown type, empty encoding */ isSettingSmartListsVisibility;
    void /* unknown type, empty encoding */ committer;
    void /* unknown type, empty encoding */ cloudKitMigrationManager;
    void /* unknown type, empty encoding */ cloudKitNetworkActivityMonitor;
    void /* unknown type, empty encoding */ perWindowLastSelectedListStorage;
    void /* unknown type, empty encoding */ smartListsDisplayOrderObservationToken;
    void /* unknown type, empty encoding */ smartListsVisibilityObservationToken;
    void /* unknown type, empty encoding */ migrationPollingTimer;
    void /* unknown type, empty encoding */ accountsEligibleForMigration_cached;
    void /* unknown type, empty encoding */ cloudKitNetworkActivity;
    void /* unknown type, empty encoding */ dataViewMonitor;
    void /* unknown type, empty encoding */ modelCachablePropertyFetchInitiator;
    void /* unknown type, empty encoding */ modelCachablePropertyFetchSubscription;
}

- (void).cxx_destruct;
- (id)init;

@end
