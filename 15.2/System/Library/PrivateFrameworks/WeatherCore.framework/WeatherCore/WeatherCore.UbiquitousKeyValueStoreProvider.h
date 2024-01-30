@interface WeatherCore.UbiquitousKeyValueStoreProvider : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ migrator;
    void /* unknown type, empty encoding */ encryptedStore;
    void /* unknown type, empty encoding */ unencryptedStore;
    void /* unknown type, empty encoding */ activeStore;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ activityQueue;
}

- (void)handleLocationsChangedExternally:(id)a0;
- (void)migrateToEncryptedStoreIfNeeded:(id)a0;

@end
