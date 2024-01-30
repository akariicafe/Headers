@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;

- (id)containerIdentifier;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)fetchSortDescriptors;
- (id)fetchedObjectIDs;
- (id)fetchRequest;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)photoLibrary;
- (id)fetchedObjectIDsSet;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)calculateMediaTypeCounts;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)fetchedObjects;
- (long long)collectionFetchType;
- (id)description;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (void).cxx_destruct;
- (id)fetchUpdatedObjects;

@end
