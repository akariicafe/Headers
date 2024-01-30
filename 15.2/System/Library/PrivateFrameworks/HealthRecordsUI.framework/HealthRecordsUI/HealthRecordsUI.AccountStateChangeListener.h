@interface HealthRecordsUI.AccountStateChangeListener : NSObject <HKClinicalAccountStoreStateChangeListener> {
    void /* unknown type, empty encoding */ _latestChange;
    void /* unknown type, empty encoding */ handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)clinicalAccountStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;

@end
