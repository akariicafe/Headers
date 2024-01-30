@class NSMutableDictionary, NSString, HDIdentifierTable, NSMutableSet, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDHealthServicesServer : HDStandardTaskServer <HKHealthServicesServerInterface>

@property (readonly, nonatomic) HDHealthServiceManager *healthServiceManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDIdentifierTable *healthServiceDiscoveryServerIDs;
@property (retain, nonatomic) NSMutableDictionary *healthServiceDiscoveryClientIDs;
@property (retain, nonatomic) HDIdentifierTable *healthDeviceSessionServerIDs;
@property (retain, nonatomic) NSMutableDictionary *healthServiceSessionClientIDs;
@property (retain, nonatomic) NSMutableSet *healthServiceClosedSessionServerIDs;
@property (retain, nonatomic) NSMutableSet *healthServiceClosedSessionClientIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)invalidate;
- (void)remote_endHealthServiceSession:(unsigned long long)a0;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)a0;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)a0;
- (void)remote_beginBluetoothStatusUpdates:(id /* block */)a0;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_startHealthServiceDiscovery:(long long)a0 withCompletion:(id /* block */)a1;
- (void)remote_startHealthServiceSession:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)remote_addPairingForHealthService:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_removePairingForHealthService:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)a0;
- (void)remote_getHealthServiceProperty:(id)a0 forSession:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)remote_addPeripheral:(id)a0 name:(id)a1 forServices:(id)a2 withCompletion:(id /* block */)a3;
- (void)remote_performHealthServiceOperation:(id)a0 onSession:(unsigned long long)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)remote_removePeripheral:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_getEnabledStatusForPeripheral:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_setEnabledStatus:(BOOL)a0 forPeripheral:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)a0;
- (void)_closeDiscoveryBetweenServer:(unsigned long long)a0 andClient:(unsigned long long)a1;
- (unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)a0;
- (BOOL)_isServerSessionValid:(unsigned long long)a0;
- (unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)a0;
- (void)_closeSessionBetweenServer:(unsigned long long)a0 andClient:(unsigned long long)a1;
- (BOOL)_isClientSessionValid:(unsigned long long)a0;
- (unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)a0;
- (id)_filterOnlyUserManageablePeripheralsFromServices:(id)a0;
- (unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)a0;

@end
