@interface HealthRecordsDaemon.ClinicalSharingSyncObserverServer : NSObject <HKClinicalSharingSyncObserverServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ syncStateSubject;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ syncStateCancellable;
}

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
