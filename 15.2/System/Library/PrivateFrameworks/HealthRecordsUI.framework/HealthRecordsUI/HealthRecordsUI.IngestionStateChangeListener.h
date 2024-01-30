@interface HealthRecordsUI.IngestionStateChangeListener : NSObject <HKHealthRecordsStoreIngestionStateListener> {
    void /* unknown type, empty encoding */ handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)healthRecordsStore:(id)a0 ingestionStateDidUpdateTo:(long long)a1;

@end
