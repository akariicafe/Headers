@class EAAccessoryManager, NSMutableDictionary, CARObserverHashTable;
@protocol CRVehicleAccessoryManagerDelegate;

@interface CRVehicleAccessoryManager : NSObject

@property (retain, nonatomic) EAAccessoryManager *accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (weak, nonatomic) id<CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate;

+ (id)sharedInstance;
+ (id)_certificateSerialNumberForAccessory:(id)a0;
+ (BOOL)_isValidAccessoryMacAddress:(id)a0;
+ (BOOL)_isVehicleAccessory:(id)a0;
+ (id)managerInfoDataCache;
+ (id)vehicleAccessQueue;

- (void)handleAccessoryInformationUpdate:(id)a0;
- (void)addObserver:(id)a0;
- (id)vehicleAccessoryForCertificateSerial:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_primeConnectedVehicleAccessories;
- (void)_updateVehicle:(id)a0 usingAccessory:(id)a1;
- (id)connectedVehicleAccessories;
- (id)init;
- (void)handleAccessoryConnect:(id)a0;
- (id)_vehicleForAccessory:(id)a0;
- (id)connectedAccessories;
- (void)handleAccessoryDisconnect:(id)a0;
- (void).cxx_destruct;
- (id)_vehicleInfoDataForAccessory:(id)a0;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)a0;

@end
