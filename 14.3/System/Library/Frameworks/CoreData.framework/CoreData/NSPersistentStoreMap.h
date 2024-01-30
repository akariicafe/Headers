@class NSString, NSDictionary, NSMappedObjectStore;

@interface NSPersistentStoreMap : NSObject {
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSDictionary *_mappings;
}

+ (void)initialize;

- (id)initWithStore:(id)a0;
- (id)configurationName;
- (void)setMetadata:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)store;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (id)_updatedMetadataWithSeed:(id)a0 includeVersioning:(BOOL)a1;
- (void)dealloc;
- (id)metadata;
- (unsigned long long)nextPK64;
- (void)addObject:(id)a0 objectIDMap:(id)a1;
- (id)dataForKey:(id)a0;
- (id)handleFetchRequest:(id)a0;
- (id)externalMapping;
- (id)databaseUUID;
- (void)updateObject:(id)a0 objectIDMap:(id)a1;
- (id)_storeMetadataForSaving;
- (void)setDatabaseUUID:(id)a0;
- (id)retainedObjectIDsForRelationship:(id)a0 forObjectID:(id)a1;
- (void)removeObject:(id)a0 objectIDMap:(id)a1;

@end
