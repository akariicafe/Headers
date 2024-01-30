@class NSString, PHChangeRequestHelper, PHPhotoLibrary, NSManagedObjectID;

@interface PHChangeRequest : NSObject <PHInsertChangeRequest>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PHChangeRequestHelper *helper;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
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

+ (id)sanitizedFailureWithError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)didMutate;
- (void)didSendChangeToServiceHandlerWithResult:(BOOL)a0;
- (void)encodeToXPCDict:(id)a0;
- (void)finalizeRequestWithBatchSuccess:(BOOL)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)performConcurrentWork;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (BOOL)prepareForServicePreflightCheck:(id *)a0;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;

@end
