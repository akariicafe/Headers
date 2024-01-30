@class NSSet, NSMutableDictionary;

@interface PLUpdatedOrderKeys : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

@property (readonly) BOOL isObservingOrderKeys;

- (id)init;
- (void).cxx_destruct;
- (BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;
- (id)getAndClearUpdatedOrderKeys;
- (void)persistentStoreDidUpdateOrderKeys:(id)a0;
- (BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;
- (id)_persistentStoresForContext:(id)a0;

@end
