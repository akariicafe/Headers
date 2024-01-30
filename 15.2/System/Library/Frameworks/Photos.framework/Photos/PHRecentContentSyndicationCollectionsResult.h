@class NSArray, NSString, PHFetchOptions, PHPhotoLibrary;

@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult {
    PHFetchOptions *_fetchOptions;
    PHPhotoLibrary *_photoLibrary;
    long long _maxNumberOfStacks;
    long long _maxNumberOfAssetsPerStack;
}

@property (readonly) NSArray *objects;
@property (readonly) NSString *identifier;

+ (id)pointerComparableIdentifiersFromIdentifiers:(id)a0;

- (id)fetchSortDescriptors;
- (id)fetchRequest;
- (id)containerIdentifier;
- (id)photoLibrary;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchOptions:(id)a2 maxNumberOfStacks:(long long)a3 maxNumberOfAssetsPerStack:(long long)a4 fetchType:(id)a5 fetchPropertySets:(id)a6 identifier:(id)a7 registerIfNeeded:(BOOL)a8;
- (long long)collectionFetchType;
- (id)description;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)fetchedObjects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)changeHandlingKey;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (BOOL)_hasReachedGroupCapacity;
- (id)_transientCollectionForIdentifier:(id)a0;
- (id)_transientCollectionForAssetOID:(id)a0;
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)a0 currentIdentifiers:(id)a1 inFetchResultBeforeChanges:(id)a2;

@end
