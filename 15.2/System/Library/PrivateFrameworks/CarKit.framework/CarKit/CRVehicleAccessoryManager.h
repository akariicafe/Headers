@class EAAccessoryManager, NSMutableDictionary, CARObserverHashTable;
@protocol CRVehicleAccessoryManagerDelegate;

@interface CRVehicleAccessoryManager : NSObject

@property (retain, nonatomic) EAAccessoryManager *accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (weak, nonatomic) id<CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate;

+ (id)sharedInstance;
+ (id)vehicleAccessQueue;
+ (id)_certificateSerialNumberForAccessory:(id)a0;
+ (BOOL)_isValidAccessoryMacAddress:(id)a0;
+ (id)managerInfoDataCache;
+ (BOOL)_isVehicleAccessory:(id)a0;

- (void)handleAccessoryConnect:(id)a0;
- (id)_vehicleForAccessory:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_updateVehicle:(id)a0 usingAccessory:(id)a1;
- (void)handleAccessoryDisconnect:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_vehicleInfoDataForAccessory:(id)a0;
- (id)connectedAccessories;
- (id)connectedVehicleAccessories;
- (id)vehicleAccessoryForCertificateSerial:(id)a0;
- (void)dealloc;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)a0;
- (void)_primeConnectedVehicleAccessories;
- (void)handleAccessoryInformationUpdate:(id)a0;

@end
