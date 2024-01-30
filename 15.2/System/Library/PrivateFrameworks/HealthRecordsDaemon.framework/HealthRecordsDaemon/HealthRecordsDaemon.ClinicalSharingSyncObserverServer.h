@interface HealthRecordsDaemon.ClinicalSharingSyncObserverServer : NSObject <HKClinicalSharingSyncObserverServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ syncStateSubject;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ syncStateCancellable;
}

- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
