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
+ (id)creationRequestForShareParticipantWithEmailAddress:(id)a0;
+ (id)creationRequestForShareParticipantWithPhoneNumber:(id)a0;
+ (void)deleteShareParticipants:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (void)setRole:(unsigned short)a0;
- (unsigned short)role;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initForNewObject;

@end
