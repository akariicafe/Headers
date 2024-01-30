@class NSString, PHRelationshipChangeRequestHelper, NSData, PHProject, NSManagedObjectID;

@interface PHProjectChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHProject *_originalProject;
    NSData *_previewImageData;
    BOOL _didSetPreviewImage;
}

@property (retain, nonatomic) NSString *projectDocumentType;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *projectExtensionData;
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

+ (void)deleteProjects:(id)a0;
+ (id)creationRequestForProjectWithDocumentType:(id)a0 projectExtensionIdentifier:(id)a1;
+ (id)creationRequestForProjectWithDocumentType:(id)a0 projectExtensionIdentifier:(id)a1 assets:(id)a2 title:(id)a3;
+ (id)creationRequestForProjectCopyFromProject:(id)a0;
+ (void)_deleteProjects:(id)a0 withOperation:(long long)a1;
+ (void)undeleteProjects:(id)a0;
+ (void)expungeProjects:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)insertAssets:(id)a0 atIndexes:(id)a1;
- (void)addAssets:(id)a0;
- (void)removeAssets:(id)a0;
- (id)initWithProject:(id)a0;
- (void)setProjectExtensionIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setProjectRenderUuid:(id)a0;
- (void)setProjectData:(id)a0;
- (void)_setOriginalProject:(id)a0;
- (void)setProjectPreviewImage:(id)a0;
- (id)placeholderForCreatedProject;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)moveAssetsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)_prepareAssetIDsIfNeeded;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)setAssets:(id)a0;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)projectData;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)projectExtensionIdentifier;
- (id)projectRenderUuid;
- (void)setKeyAsset:(id)a0;
- (void)replaceAssetsAtIndexes:(id)a0 withAssets:(id)a1;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;
- (BOOL)prepareForServicePreflightCheck:(id *)a0;
- (id)initForNewObject;

@end
