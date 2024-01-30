@class NSString, PHObjectPlaceholder, NSManagedObjectID;

@interface PHShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedShareParticipant;
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

+ (id)changeRequestForShareParticipant:(id)a0;
+ (id)creationRequestForShareParticipantWithEmailAddress:(id)a0 permission:(short)a1;
+ (id)creationRequestForShareParticipantWithPhoneNumber:(id)a0 permission:(short)a1;
+ (void)deleteShareParticipants:(id)a0;

- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (unsigned short)role;
- (void)setRole:(unsigned short)a0;
- (void)setPermission:(short)a0;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (short)permission;

@end
