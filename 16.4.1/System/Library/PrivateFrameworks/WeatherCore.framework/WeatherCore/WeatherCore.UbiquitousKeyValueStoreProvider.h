@interface WeatherCore.UbiquitousKeyValueStoreProvider : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lazyMigrator;
    void /* unknown type, empty encoding */ lazyEncryptedStore;
    void /* unknown type, empty encoding */ lazyUnencryptedStore;
    void /* unknown type, empty encoding */ activeStoreState;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ activityQueue;
    void /* unknown type, empty encoding */ iCloudStatusProvider;
}

- (void)handleLocationsChangedExternally:(id)a0;
- (void)migrateToEncryptedStoreIfNeededAndHandleLocationsChangedExternally:(id)a0;

@end
