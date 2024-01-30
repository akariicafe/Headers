@interface HealthRecordsDaemon.ClinicalSharingServer : NSObject <HKClinicalSharingServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_shareHealthDataWithOptions:(unsigned long long)a0 reason:(long long)a1 date:(id)a2 completion:(id /* block */)a3;
- (void)remote_scheduleSharingHealthDataWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)remote_gatherQueryDiagnosticsWithOptions:(unsigned long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)remote_submitDailyAnalyticsWithCompletion:(id /* block */)a0;
- (void)remote_submitOnboardingAnalyticsForStepIdentifier:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
