@class EAAccessoryManager, NSMutableDictionary, CARObserverHashTable;
@protocol CRVehicleAccessoryManagerDelegate;

@interface CRVehicleAccessoryManager : NSObject

@property (retain, nonatomic) EAAccessoryManager *accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (weak, nonatomic) id<CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate;

+ (id)sharedInstance;
+ (id)_certificateSerialNumberForAccessory:(id)a0;
+ (id)managerInfoDataCache;
+ (BOOL)_isVehicleAccessory:(id)a0;
+ (BOOL)_isValidAccessoryMacAddress:(id)a0;
+ (id)vehicleAccessQueue;

- (id)init;
- (void)handleAccessoryConnect:(id)a0;
- (void).cxx_destruct;
- (void)_primeConnectedVehicleAccessories;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)handleAccessoryDisconnect:(id)a0;
- (id)_vehicleForAccessory:(id)a0;
- (id)_vehicleInfoDataForAccessory:(id)a0;
- (id)connectedVehicleAccessories;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)a0;
- (void)_updateVehicle:(id)a0 usingAccessory:(id)a1;
- (id)vehicleAccessoryForCertificateSerial:(id)a0;
- (void)handleAccessoryInformationUpdate:(id)a0;
- (id)connectedAccessories;

@end
