@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {
    NSMutableDictionary *_theMap;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithStore:(id)a0;
- (id)dataForKey:(id)a0;
- (id)initWithStore:(id)a0 fromArchivedData:(id)a1;
- (void)addObject:(id)a0 objectIDMap:(id)a1;
- (id)handleFetchRequest:(id)a0;
- (id)initWithStore:(id)a0 fromPath:(id)a1;
- (void)removeObject:(id)a0 objectIDMap:(id)a1;
- (id)retainedObjectIDsForRelationship:(id)a0 forObjectID:(id)a1;
- (void)updateObject:(id)a0 objectIDMap:(id)a1;

@end
