@interface HealthRecordsUI.IngestionStateChangeListener : NSObject <HKHealthRecordsStoreIngestionStateListener> {
    void /* unknown type, empty encoding */ handler;
}

- (id)init;
- (void).cxx_destruct;
- (void)healthRecordsStore:(id)a0 ingestionStateDidUpdateTo:(long long)a1;

@end
