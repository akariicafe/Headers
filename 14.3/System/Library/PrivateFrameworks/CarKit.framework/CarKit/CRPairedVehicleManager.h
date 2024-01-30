@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;

- (id)init;
- (void).cxx_destruct;
- (id)allVehicles;
- (id)saveVehicle:(id)a0;
- (void)fetchAllVehiclesWithCompletion:(id /* block */)a0;
- (void)syncFetchAllVehiclesWithCompletion:(id /* block */)a0;
- (id)_firstVehicleMatchingTest:(id /* block */)a0;
- (BOOL)removeVehicle:(id)a0;
- (void)saveVehicle:(id)a0 completion:(id /* block */)a1;
- (void)removeVehicle:(id)a0 completion:(id /* block */)a1;
- (void)fetchPairedVehiclesWithCompletion:(id /* block */)a0;
- (id)vehicleForBluetoothAddress:(id)a0;
- (id)vehicleNameForWiFiUUID:(id)a0;
- (id)vehicleForCertificateSerial:(id)a0;
- (id)pairedVehicles;

@end
