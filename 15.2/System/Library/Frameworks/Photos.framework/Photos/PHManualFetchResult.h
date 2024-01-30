@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;

- (id)fetchSortDescriptors;
- (id)fetchUpdatedObjects;
- (id)fetchRequest;
- (id)containerIdentifier;
- (id)photoLibrary;
- (long long)collectionFetchType;
- (id)fetchedObjectIDs;
- (id)description;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchedObjects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)changeHandlingKey;
- (void)getMediaTypeCounts;
- (id)fetchedObjectIDsSet;
- (unsigned long long)hash;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (id)copyWithOptions:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;

@end
