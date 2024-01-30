@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, NSManagedObjectID;

@interface PHSuggestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSuggestion;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) unsigned short featuredState;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *context;
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

+ (id)changeRequestForSuggestion:(id)a0;
+ (id)creationRequestForSuggestion;
+ (id)creationRequestForSuggestionWithType:(unsigned short)a0 subtype:(unsigned short)a1 keyAssets:(id)a2 representativeAssets:(id)a3 creationDate:(id)a4 relevantUntilDate:(id)a5 version:(long long)a6;
+ (void)deleteSuggestions:(id)a0;

- (void)setSubtype:(unsigned short)a0;
- (unsigned short)state;
- (id)creationDate;
- (long long)version;
- (void)setStartDate:(id)a0;
- (void)setVersion:(long long)a0;
- (unsigned short)subtype;
- (void)setCreationDate:(id)a0;
- (unsigned short)type;
- (void)setEndDate:(id)a0;
- (id)activationDate;
- (id)endDate;
- (id)actionData;
- (void)setType:(unsigned short)a0;
- (void)setActionData:(id)a0;
- (id)startDate;
- (void).cxx_destruct;
- (void)setState:(unsigned short)a0;
- (void)markReactivated;
- (void)setExpungeDate:(id)a0;
- (void)_calculateAndSetExpungeDate;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)expungeDate;
- (id)featuresData;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)markAccepted;
- (void)markActive;
- (void)markDeclined;
- (void)markRetired;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (id)relevantUntilDate;
- (void)setActionProperties:(id)a0;
- (void)setActivationDate:(id)a0;
- (void)setFeaturesData:(id)a0;
- (void)setFeaturesProperties:(id)a0;
- (void)setKeyAssets:(id)a0;
- (void)setRelevantUntilDate:(id)a0;
- (void)setRepresentativeAssets:(id)a0;
- (void)setStartAndEndDatesWithKeyAssets:(id)a0 representativeAssets:(id)a1;
- (id)validateMutationsToManagedObject:(id)a0;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;

@end
