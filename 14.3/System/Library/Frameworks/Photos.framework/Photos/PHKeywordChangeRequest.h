@class NSString, PHObjectPlaceholder, NSManagedObjectID;

@interface PHKeywordChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedKeyword;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortcut;
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

+ (id)creationRequestForKeyword;
+ (id)changeRequestForKeyword:(id)a0;
+ (void)deleteKeywords:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (BOOL)_validateMutationOfTitleToKeyword:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initForNewObject;

@end
