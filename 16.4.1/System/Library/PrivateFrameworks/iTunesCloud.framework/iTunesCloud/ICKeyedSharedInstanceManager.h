@class NSMutableDictionary, NSMapTable;

@interface ICKeyedSharedInstanceManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _instantiationHandler;
    NSMutableDictionary *_stronglyHeldSharedInstances;
    NSMapTable *_weaklyHeldSharedInstances;
    NSMutableDictionary *_usageCounts;
}

- (id)sharedInstanceForKey:(id)a0;
- (id)initWithInstantiationHandler:(id /* block */)a0;
- (void)incrementUsageCountForKey:(id)a0;
- (void)decrementUsageCountForKey:(id)a0;
- (void).cxx_destruct;

@end
