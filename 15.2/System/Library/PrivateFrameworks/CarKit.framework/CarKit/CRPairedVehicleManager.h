@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;

- (void)removeVehicle:(id)a0 completion:(id /* block */)a1;
- (id)vehicleForBluetoothAddress:(id)a0;
- (id)pairedVehicles;
- (void)syncFetchAllVehiclesWithCompletion:(id /* block */)a0;
- (id)_firstVehicleMatchingTest:(id /* block */)a0;
- (id)vehicleForCertificateSerial:(id)a0;
- (void)fetchAllVehiclesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchPairedVehiclesWithCompletion:(id /* block */)a0;
- (id)init;
- (void)saveVehicle:(id)a0 completion:(id /* block */)a1;
- (id)allVehicles;
- (BOOL)removeVehicle:(id)a0;
- (id)saveVehicle:(id)a0;
- (id)vehicleNameForWiFiUUID:(id)a0;

@end
