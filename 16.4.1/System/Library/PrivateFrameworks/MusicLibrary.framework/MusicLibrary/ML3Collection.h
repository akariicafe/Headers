@interface ML3Collection : ML3Entity

+ (void)initialize;
+ (id)trackForeignPersistentID;
+ (BOOL)_updateRepresentativeItemsForPersistentIDs:(id)a0 usingConnection:(id)a1;
+ (id)artworkCacheIDProperty;
+ (BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)collectionEntityClasses;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)removeOrphanedCollectionsInLibrary:(id)a0 usingConnection:(id)a1;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)a0 persistentIDs:(id)a1 usingConnection:(id)a2;

- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)a0 existingRepresentativePersistentID:(unsigned long long)a1 forUpdateTrackValues:(id)a2;
- (void)updateTrackValues:(id)a0;

@end
