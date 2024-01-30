@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accessoryDidDisconnect:(id)a0;
- (void)_accessoryDidConnect:(id)a0;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (BOOL)_isConnectedToCarPlayAccessory;
- (BOOL)_isAccessoryTracked:(id)a0;
- (id)_vehicleStateForCurrentState;
- (id)_bluetoothIdentifier;
- (void)_removeCarPlayAccessory:(id)a0;
- (BOOL)_isConnectedToElectricVehicle;
- (void)_updateFromVehicleInfo:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (void)_addNewCarPlayAccessory:(id)a0;
- (id)init;
- (BOOL)isConnectedToVehicle:(id)a0;
- (void)dealloc;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (id)_vehicleForCurrentState;
- (void)_notifyDelegateWithCurrentVehicle;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (void)_accessoryDidUpdateVehicle:(id)a0;

@end
