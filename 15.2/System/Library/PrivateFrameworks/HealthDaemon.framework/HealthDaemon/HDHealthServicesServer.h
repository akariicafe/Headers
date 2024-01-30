@class NSString, NSMutableDictionary, HDIdentifierTable, NSMutableSet, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDHealthServicesServer : HDStandardTaskServer <HKHealthServicesServerInterface> {
    HDHealthServiceManager *_healthServiceManager;
    NSObject<OS_dispatch_queue> *_queue;
    HDIdentifierTable *_healthServiceDiscoveryServerIDs;
    NSMutableDictionary *_healthServiceDiscoveryClientIDs;
    HDIdentifierTable *_healthDeviceSessionServerIDs;
    NSMutableDictionary *_healthServiceSessionClientIDs;
    NSMutableSet *_healthServiceClosedSessionServerIDs;
    NSMutableSet *_healthServiceClosedSessionClientIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)remote_beginBluetoothStatusUpdates:(id /* block */)a0;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)a0;
- (void)remote_startHealthServiceDiscovery:(long long)a0 withCompletion:(id /* block */)a1;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)a0;
- (void)remote_startHealthServiceSession:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_endHealthServiceSession:(unsigned long long)a0;
- (void)remote_removePeripheral:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)remote_addPairingForHealthService:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_removePairingForHealthService:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)a0;
- (void)remote_getHealthServiceProperty:(id)a0 forSession:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)remote_addPeripheral:(id)a0 name:(id)a1 forServices:(id)a2 withCompletion:(id /* block */)a3;
- (void)remote_performHealthServiceOperation:(id)a0 onSession:(unsigned long long)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)remote_getEnabledStatusForPeripheral:(id)a0 withCompletion:(id /* block */)a1;
- (id)remoteInterface;
- (void)remote_setEnabledStatus:(BOOL)a0 forPeripheral:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;

@end
