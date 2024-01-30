@class NSString, NSDictionary, WFDatabase, NSError, WFImage, WFWorkflow;
@protocol WFAccessResourcePerWorkflowState, NSObject;

@interface WFAccessResource : WFResource <WFWorkflowReferencing>

@property (class, readonly, nonatomic) Class perWorkflowStateClass;
@property (class, readonly, nonatomic, getter=isSystemResource) BOOL systemResource;

@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL canLogOut;
@property (readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) NSError *workflowLevelAvailabilityError;
@property (readonly, nonatomic) NSError *globalLevelAvailabilityError;
@property (readonly, nonatomic) NSError *computedAvailabilityError;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) id<NSObject> resourceAvailabilityChangedNotificationObserver;
@property (readonly, nonatomic) unsigned long long globalLevelStatus;
@property (readonly, nonatomic) unsigned long long workflowLevelStatus;
@property (retain, nonatomic) id<WFAccessResourcePerWorkflowState> currentPerWorkflowState;
@property (readonly, nonatomic) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
@property (readonly, nonatomic) NSString *workflowLevelPromptTemplate;
@property (readonly, nonatomic) NSString *workflowLevelMessageTemplate;
@property (readonly, nonatomic) NSString *workflowLevelNotDeterminedStatusMessage;
@property (readonly, nonatomic) NSString *workflowLevelDeniedStatusMessage;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelPromptTemplate;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelMessageTemplate;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property (readonly, nonatomic) NSString *associatedAppIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *protectedResourceDescription;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessResourceFromDatabaseState:(id)a0;

- (id)initWithPersistentIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logOut;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (id)initWithDefinition:(id)a0 persistentIdentifier:(id)a1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)a0 overridingPreviouslyDeterminedAuthorizations:(BOOL)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)refreshAvailabilityWithNotification:(BOOL)a0;
- (void)makeAvailableAtWorkflowLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)statusAtLevel:(unsigned long long)a0;
- (id)availabilityErrorForLevel:(unsigned long long)a0;
- (void)makeAvailableAtLevel:(unsigned long long)a0 withUserInterface:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)a0 overridingPreviouslyDeterminedAuthorizations:(BOOL)a1;
- (BOOL)isEquivalentToAccessResource:(id)a0;
- (void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)loadPersistedPerWorkflowStateForReference:(id)a0 inDatabase:(id)a1;
- (void)refreshCurrentPerWorkflowState;
- (void)refreshCurrentPerWorkflowStateForReference:(id)a0 inDatabase:(id)a1;
- (void)persistPerWorkflowState:(id)a0 forReference:(id)a1 inDatabase:(id)a2;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)a0 forReference:(id)a1 inDatabase:(id)a2 overridingPreviouslyDeterminedAuthorizations:(BOOL)a3;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedAttemptRecoveryFromErrorMessage;

@end
