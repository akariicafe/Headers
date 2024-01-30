@interface RemindersUICore.TTRAccountsListsInteractor : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ isSettingSmartListsDisplayOrderInUserDefaults;
    void /* unknown type, empty encoding */ isSettingSmartListsVisibilityInUserDefaults;
    void /* unknown type, empty encoding */ committer;
    void /* unknown type, empty encoding */ cloudKitMigrationManager;
    void /* unknown type, empty encoding */ cloudKitNetworkActivityMonitor;
    void /* unknown type, empty encoding */ perWindowLastSelectedListStorage;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ smartListsDisplayOrderObservationToken;
    void /* unknown type, empty encoding */ smartListsVisibilityObservationToken;
    void /* unknown type, empty encoding */ migrationPollingTimer;
    void /* unknown type, empty encoding */ accountsEligibleForMigration_cached;
    void /* unknown type, empty encoding */ cloudKitNetworkActivity;
    void /* unknown type, empty encoding */ dataViewMonitor;
    void /* unknown type, empty encoding */ modelCachablePropertyFetchInitiator;
    void /* unknown type, empty encoding */ modelCachablePropertyFetchSubscription;
}

- (id)init;
- (void).cxx_destruct;

@end
