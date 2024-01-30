@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)containerIdentifier;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)fetchSortDescriptors;
- (id)fetchedObjectIDs;
- (id)fetchRequest;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)photoLibrary;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)calculateMediaTypeCounts;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (id)fetchedObjects;
- (long long)collectionFetchType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
