@class PHRelationshipChangeRequestHelper, NSDictionary, NSString, PHPhotosHighlight, NSManagedObjectID;

@interface PHPhotosHighlightChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayKeyAssetHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *monthKeyAssetHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *yearKeyAssetHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayGroupKeyAssetHelper;
@property (retain, nonatomic) PHPhotosHighlight *originalHighlight;
@property (readonly, nonatomic) NSDictionary *curationHelpersByCurationType;
@property (retain, nonatomic) NSString *dateDescription;
@property (retain, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) unsigned long long mood;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeRequestForPhotosHighlight:(id)a0;
+ (void)deletePhotosHighlights:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)_initializeCurationHelpersWithHelper:(id)a0 xpcDict:(id)a1;
- (short)enrichmentVersion;
- (void)setEnrichmentVersion:(short)a0;
- (unsigned short)_internalCurationTypeForExternalCurationType:(unsigned short)a0;
- (unsigned short)_externalCurationTypeForInternalCurationType:(unsigned short)a0;
- (void)clearCurationWithType:(unsigned short)a0;
- (void)setAssets:(id)a0 forCurationType:(unsigned short)a1;
- (void)didEnrichHighlight;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (id)_mutableAssetObjectIDsAndUUIDsForCurationType:(unsigned short)a0;
- (id)_existentAssetObjectIDs;
- (id)_existentCuratedAssetObjectIDsForCurationType:(unsigned short)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)setKeyAsset:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initForNewObject;

@end
