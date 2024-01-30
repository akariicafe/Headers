@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)containerIdentifier;
- (id)fetchedObjects;
- (BOOL)isFullyBackedByObjectIDs;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)fetchRequest;
- (void).cxx_destruct;
- (id)photoLibrary;
- (long long)collectionFetchType;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)changeHandlingKey;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)fetchedObjectIDs;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)copyWithOptions:(id)a0;
- (id)fetchSortDescriptors;
- (void)getMediaTypeCounts;

@end
