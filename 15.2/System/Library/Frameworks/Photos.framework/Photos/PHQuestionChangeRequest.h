@class PHObjectPlaceholder, NSString, NSDictionary, NSDate, NSManagedObjectID;

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (copy, nonatomic) NSString *entityIdentifier;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) unsigned short displayType;
@property (nonatomic) double score;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedQuestion;
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

+ (void)deleteQuestions:(id)a0;
+ (id)creationRequestForQuestionWithEntityIdentifier:(id)a0 type:(unsigned short)a1 state:(unsigned short)a2 entityType:(unsigned short)a3 displayType:(unsigned short)a4 score:(double)a5 additionalInfo:(id)a6 creationDate:(id)a7;
+ (id)changeRequestForQuestion:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end
