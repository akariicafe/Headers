@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGExternalAccessoryModelFilter, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_firmwareId;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (void)_accessoryDidConnect:(id)a0;
- (id)_bluetoothIdentifier;
- (BOOL)isConnectedToVehicle:(id)a0;
- (id)_vehicleStateForCurrentState;
- (void)_updateFromVehicleInfo:(id)a0;
- (BOOL)_isConnectedVehicleAllowlisted;
- (BOOL)_isConnectedToElectricVehicle;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (void)_addNewCarPlayAccessory:(id)a0;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (id)_vehicleForCurrentState;
- (void)_accessoryDidUpdateVehicle:(id)a0;
- (id)_identifier;
- (void)dealloc;
- (id)init;
- (void)_removeCarPlayAccessory:(id)a0;
- (BOOL)_isAccessoryTracked:(id)a0;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (id)_modelIdFromArguments:(id)a0;
- (void)_accessoryDidDisconnect:(id)a0;
- (void)_notifyDelegateWithCurrentVehicle;
- (BOOL)_isConnectedToCarPlayAccessory;
- (void).cxx_destruct;
- (void)listCarsWithCompletion:(id /* block */)a0;

@end
