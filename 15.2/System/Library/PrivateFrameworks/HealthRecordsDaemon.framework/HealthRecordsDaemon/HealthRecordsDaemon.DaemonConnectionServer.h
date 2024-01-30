@interface HealthRecordsDaemon.DaemonConnectionServer : NSObject <HKHealthRecordsDaemonConnectionServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ serviceMap;
}

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchEndpointForServiceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
