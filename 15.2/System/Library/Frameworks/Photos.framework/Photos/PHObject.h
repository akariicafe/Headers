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

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)uuidFromLocalIdentifier:(id)a0;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (BOOL)managedObjectSupportsPendingState;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)a0;
+ (id)entityKeyForPropertyKey:(id)a0;
+ (id)identifierPropertiesToFetch;
+ (id)propertySetAccessorsByPropertySet;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)a0;
+ (BOOL)managedObjectSupportsFaceState;
+ (BOOL)managedObjectSupportsBodyDetection;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)a0;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsKeyFaces;
+ (BOOL)managedObjectSupportsDetectionType;
+ (BOOL)managedObjectSupportsTorsoOnly;
+ (id)localIdentifierExpressionForFetchRequests;
+ (BOOL)managedObjectSupportsRejectedState;
+ (void)extendPropertiesToFetch:(id)a0 withPropertySetClass:(Class)a1;
+ (void)extendPropertiesToFetch:(id)a0 withProperties:(id)a1;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsContributor;
+ (id)propertyKeyForEntityKey:(id)a0;
+ (id)authorizationAwareFetchResultWithOptions:(id)a0 fetchBlock:(id /* block */)a1;
+ (void)assertAllObjects:(id)a0 forSelector:(SEL)a1 areOfType:(Class)a2;
+ (Class)propertySetClassForPropertySet:(id)a0;
+ (id)identifierCodeFromLocalIdentifier:(id)a0;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLoadedPropertySet:(id)a0;
- (void)dealloc;
- (id)_shortObjectIDURI;

@end
