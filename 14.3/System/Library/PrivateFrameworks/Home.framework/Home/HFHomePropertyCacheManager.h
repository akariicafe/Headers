@class NSString, NSMutableDictionary;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>

@property (retain, nonatomic) NSMutableDictionary *objectCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (id)valueForObject:(id)a0 key:(id)a1 invalidationReasons:(unsigned long long)a2 recalculationBlock:(id /* block */)a3;
- (void)_clearCachedValues;

@end
