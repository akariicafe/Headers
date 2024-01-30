@class NSCache, NSString;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>

@property (retain, nonatomic) NSCache *objectCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)homeManagerDidFinishUnknownChange:(id)a0;
- (id)valueForObject:(id)a0 key:(id)a1 invalidationReasons:(unsigned long long)a2 recalculationBlock:(id /* block */)a3;
- (id)cachedValuesForObject:(id)a0;
- (void)_clearCachedValues;

@end
