@class NSString, NSDictionary, NSMappedObjectStore;

@interface NSPersistentStoreMap : NSObject {
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSDictionary *_mappings;
}

+ (void)initialize;

- (id)dataForKey:(id)a0;
- (id)configurationName;
- (id)initWithStore:(id)a0;
- (void)dealloc;
- (void)addObject:(id)a0 objectIDMap:(id)a1;
- (id)handleFetchRequest:(id)a0;
- (unsigned long long)nextPK64;
- (void)removeObject:(id)a0 objectIDMap:(id)a1;
- (id)retainedObjectIDsForRelationship:(id)a0 forObjectID:(id)a1;
- (void)updateObject:(id)a0 objectIDMap:(id)a1;

@end
