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
- (id)fetchedObjects;
- (BOOL)isFullyBackedByObjectIDs;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)fetchRequest;
- (void).cxx_destruct;
- (id)photoLibrary;
- (long long)collectionFetchType;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)changeHandlingKey;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (id)fetchedObjectIDsSet;
- (id)fetchUpdatedObjects;
- (unsigned long long)hash;
- (id)description;
- (id)fetchedObjectIDs;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)copyWithOptions:(id)a0;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)fetchSortDescriptors;
- (void)getMediaTypeCounts;

@end
