@class NSSet, NSMutableDictionary;

@interface PLUpdatedOrderKeys : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

@property (readonly) BOOL isObservingOrderKeys;

- (BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;
- (void)persistentStoreDidUpdateOrderKeys:(id)a0;
- (id)_persistentStoresForContext:(id)a0;
- (BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getAndClearUpdatedOrderKeys;

@end
