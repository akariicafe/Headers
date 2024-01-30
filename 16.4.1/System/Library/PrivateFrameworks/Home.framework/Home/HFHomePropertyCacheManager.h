@class NSCache, NSMutableDictionary, NSString;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>

@property (retain, nonatomic) NSCache *objectCaches;
@property (readonly, nonatomic) NSMutableDictionary *changedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)home:(id)a0 didAddService:(id)a1 toServiceGroup:(id)a2;
- (void)home:(id)a0 didAddServiceGroup:(id)a1;
- (void)home:(id)a0 didRemoveService:(id)a1 fromServiceGroup:(id)a2;
- (void)home:(id)a0 didRemoveServiceGroup:(id)a1;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)homeManagerDidFinishUnknownChange:(id)a0;
- (void)_clearCachedValues;
- (id)cachedValuesForObject:(id)a0;
- (void)resetTrackingChangedKeys;
- (void)stopTrackingChangedKeys;
- (id)valueForObject:(id)a0 key:(id)a1 invalidationReasons:(unsigned long long)a2 recalculationBlock:(id /* block */)a3;

@end
