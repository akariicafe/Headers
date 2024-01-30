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

+ (id)identifierCode;
+ (BOOL)managedObjectSupportsFaceState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (void)extendPropertiesToFetch:(id)a0 withProperties:(id)a1;
+ (id)identifierPropertiesToFetch;
+ (void)extendPropertiesToFetch:(id)a0 withPropertySetClass:(Class)a1;
+ (id)uuidFromLocalIdentifier:(id)a0;
+ (id)identifierCodeFromLocalIdentifier:(id)a0;
+ (void)assertAllObjects:(id)a0 forSelector:(SEL)a1 areOfType:(Class)a2;
+ (id)authorizationAwareFetchResultWithOptions:(id)a0 fetchBlock:(id /* block */)a1;
+ (id)propertyKeyForEntityKey:(id)a0;
+ (id)entityKeyForPropertyKey:(id)a0;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)a0;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)a0;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsContributor;
+ (Class)propertySetClassForPropertySet:(id)a0;
+ (id)propertySetAccessorsByPropertySet;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (id)localIdentifierWithUUID:(id)a0;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsKeyFaces;
+ (id)localIdentifierExpressionForFetchRequests;

- (Class)changeRequestClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLoadedPropertySet:(id)a0;
- (id)_shortObjectIDURI;
- (BOOL)isEqual:(id)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
