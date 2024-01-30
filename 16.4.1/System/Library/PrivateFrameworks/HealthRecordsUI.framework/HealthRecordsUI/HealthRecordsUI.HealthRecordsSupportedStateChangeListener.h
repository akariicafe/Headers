@interface HealthRecordsUI.HealthRecordsSupportedStateChangeListener : NSObject <HKHealthRecordsStoreHealthRecordsSupportedStateChangeListener> {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ _latestChange;
}

- (id)init;
- (void).cxx_destruct;
- (void)healthRecordsStore:(id)a0 healthRecordsSupportedDidChangeTo:(BOOL)a1;

@end
