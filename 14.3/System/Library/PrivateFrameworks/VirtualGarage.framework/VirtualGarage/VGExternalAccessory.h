@class VGExternalAccessoryState, NSString, VGVehicleState, EAAccessory, VGVehicle;
@protocol VGExternalAccessoryUpdating;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    EAAccessory *_accessory;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnectedToElectricVehicle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bluetoothIdentifier;
@property (readonly, nonatomic) VGExternalAccessoryState *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accessoryDidDisconnect:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_accessoryDidUpdate:(id)a0;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_loadInitialAccessoryState;
- (void)_accessoryDidUpdateVehicle:(id)a0;
- (void)_updateFromVehicleInfo:(id)a0;
- (void)_accessoryDidConnect:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;

@end
