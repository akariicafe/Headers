@class PHPerformChangesRequest, NSString, NSMutableDictionary, NSMutableSet, NSManagedObjectID;
@protocol PHChangeRequest, PLClientAuthorization;

@interface PHChangeRequestHelper : NSObject {
    BOOL _isMutated;
    BOOL _isNewRequest;
}

@property (weak, nonatomic) id<PHChangeRequest> changeRequest;
@property (nonatomic) PHPerformChangesRequest *request;
@property (readonly, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSMutableDictionary *mutations;
@property (readonly, nonatomic) NSMutableSet *nilMutations;
@property (nonatomic, getter=isNewRequest) BOOL newRequest;
@property (nonatomic, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (readonly, nonatomic) id<PLClientAuthorization> clientAuthorization;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic, getter=isClientInLimitedLibraryMode) BOOL clientInLimitedLibraryMode;

+ (id)changeRequestForObject:(id)a0;
+ (id)changeRequestWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1 isNew:(BOOL)a2 changeRequest:(id)a3;
- (id)placeholderForCreatedObjectWithClass:(Class)a0 changeRequest:(id)a1;
- (BOOL)prepareForServicePreflightCheck:(id *)a0;
- (BOOL)applyMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)description;
- (id)initForNewObjectWithChangeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)init;
- (id)initWithXPCDict:(id)a0 changeRequest:(id)a1 request:(id)a2 clientAuthorization:(id)a3;
- (id)initForNewObjectWithUUID:(id)a0 changeRequest:(id)a1;
- (id)initWithUUID:(id)a0 objectID:(id)a1 changeRequest:(id)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)didMutate;

@end
