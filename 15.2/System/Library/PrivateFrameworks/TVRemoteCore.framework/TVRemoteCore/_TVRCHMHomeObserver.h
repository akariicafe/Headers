@class HMHome, NSMutableDictionary, NSString;

@interface _TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate>

@property (retain, nonatomic) NSMutableDictionary *serviceToAccessoryIDMapping;
@property (retain, nonatomic) HMHome *currentHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)accessoryDidUpdateReachableTransports:(id)a0;
- (void)accessory:(id)a0 didUpdateNameForService:(id)a1;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)_updateAccessoriesForHome:(id)a0;
- (void)_updateServicesForAccessory:(id)a0;
- (void)_checkAccessoryReachabilityAndFetchTVServices:(id)a0 withCompletion:(id /* block */)a1;
- (void)_readCharacteristic:(id)a0 completion:(id /* block */)a1;
- (BOOL)_checkErrorForLocallySuspendedAccessory:(id)a0;

@end
