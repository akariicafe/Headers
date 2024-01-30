@class NSString, HKHealthStore, WFAction;

@interface WFHealthKitAccessResource : WFGranularAccessResource <WFActionEventObserver> {
    unsigned long long _globalLevelStatus;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemResource;
+ (Class)perWorkflowStateClass;
+ (BOOL)alwaysMakeAvailable;

- (void).cxx_destruct;
- (id)objectTypes;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestedEntries;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;
- (id)objectTypesForAccessType:(id)a0;
- (id)readTypes;
- (id)writeTypes;
- (id)readableUnauthorizedResourceDescription;

@end
