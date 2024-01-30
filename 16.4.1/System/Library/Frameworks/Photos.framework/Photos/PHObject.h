@class PHObjectReference, PHEntityKeyMap, NSString, PHPhotoLibrary, NSManagedObjectID;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying>

@property (class, readonly) PHEntityKeyMap *entityKeyMap;

@property (readonly, nonatomic) PHObjectReference *objectReference;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) id identifier;
@property (readonly, getter=isDeleted) BOOL deleted;
@property unsigned long long propertyHint;
@property (readonly) NSString *uuid;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)managedObjectSupportsSharingComposition;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (Class)propertySetClassForPropertySet:(id)a0;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)propertyKeyForEntityKey:(id)a0;
+ (id)fetchPredicateForSharingFilter:(unsigned short)a0;
+ (id)fetchType;
+ (id)identifierCode;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)a0;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)a0;
+ (id)managedEntityName;
+ (id)entityKeyForPropertyKey:(id)a0;
+ (id)propertySetAccessorsByPropertySet;
+ (void)assertAllObjects:(id)a0 forSelector:(SEL)a1 areOfType:(Class)a2;
+ (id)authorizationAwareFetchResultWithOptions:(id)a0 fetchBlock:(id /* block */)a1;
+ (void)extendPropertiesToFetch:(id)a0 withProperties:(id)a1;
+ (void)extendPropertiesToFetch:(id)a0 withPropertySetClass:(Class)a1;
+ (id)identifierCodeFromLocalIdentifier:(id)a0;
+ (id)identifierPropertiesToFetch;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)localIdentifiersWithUUIDs:(id)a0;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsBodyDetection;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsContributor;
+ (BOOL)managedObjectSupportsDetectionType;
+ (BOOL)managedObjectSupportsDuplicateVisibilityState;
+ (BOOL)managedObjectSupportsFaceState;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsKeyFaces;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsShareExitingState;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (BOOL)managedObjectSupportsTorsoOnly;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)objectIDsMatchingEntityFromObjectIDs:(id)a0 context:(id)a1;
+ (id)uuidFromLocalIdentifier:(id)a0;
+ (id)uuidsFromLocalIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (Class)changeRequestClass;
- (BOOL)hasLoadedPropertySet:(id)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
