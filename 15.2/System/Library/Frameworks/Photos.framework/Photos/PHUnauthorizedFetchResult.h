@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)fetchSortDescriptors;
- (id)fetchRequest;
- (id)containerIdentifier;
- (id)photoLibrary;
- (long long)collectionFetchType;
- (id)fetchedObjectIDs;
- (id)description;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchedObjects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)changeHandlingKey;
- (void)getMediaTypeCounts;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;

@end
