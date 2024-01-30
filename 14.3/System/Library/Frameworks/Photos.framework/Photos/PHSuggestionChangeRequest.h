@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, NSManagedObjectID;

@interface PHSuggestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSuggestion;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) unsigned short featuredState;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
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

+ (id)creationRequestForSuggestionWithType:(unsigned short)a0 subtype:(unsigned short)a1 keyAssets:(id)a2 representativeAssets:(id)a3 creationDate:(id)a4 relevantUntilDate:(id)a5 version:(long long)a6;
+ (void)deleteSuggestions:(id)a0;
+ (id)creationRequestForSuggestion;
+ (id)changeRequestForSuggestion:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (void)setSubtype:(unsigned short)a0;
- (unsigned short)subtype;
- (void)setCreationDate:(id)a0;
- (void).cxx_destruct;
- (id)expungeDate;
- (id)creationDate;
- (void)setType:(unsigned short)a0;
- (void)markRetired;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)markActive;
- (id)startDate;
- (id)featuresData;
- (id)actionData;
- (void)setKeyAssets:(id)a0;
- (void)setActivationDate:(id)a0;
- (id)relevantUntilDate;
- (void)setRelevantUntilDate:(id)a0;
- (void)setExpungeDate:(id)a0;
- (void)setFeaturesData:(id)a0;
- (void)setRepresentativeAssets:(id)a0;
- (void)setActionProperties:(id)a0;
- (void)setFeaturesProperties:(id)a0;
- (void)setStartAndEndDatesWithKeyAssets:(id)a0 representativeAssets:(id)a1;
- (void)markAccepted;
- (void)markDeclined;
- (void)markReactivated;
- (void)_calculateAndSetExpungeDate;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (unsigned short)type;
- (void)setEndDate:(id)a0;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (long long)version;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)activationDate;
- (void)setState:(unsigned short)a0;
- (void)setStartDate:(id)a0;
- (id)endDate;
- (void)setActionData:(id)a0;
- (unsigned short)state;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)initForNewObject;
- (void)setVersion:(long long)a0;

@end
