@class NSPersistentStoreCoordinator, NSMutableDictionary, NSPersistentStore;

@interface RCDatabaseMetadata : NSObject {
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableDictionary *_metadata;
}

@property (readonly) BOOL dirty;

- (id)initWithPersistentStore:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)save;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)migrate:(id)a0;
- (void).cxx_destruct;

@end
