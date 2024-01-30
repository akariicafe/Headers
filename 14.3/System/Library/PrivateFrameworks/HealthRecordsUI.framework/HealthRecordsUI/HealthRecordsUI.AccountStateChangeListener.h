@interface HealthRecordsUI.AccountStateChangeListener : NSObject <HKHealthRecordsStoreAccountStateChangeListener> {
    void /* unknown type, empty encoding */ _latestChange;
    void /* unknown type, empty encoding */ handler;
}

- (id)init;
- (void).cxx_destruct;
- (void)healthRecordsStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;

@end
