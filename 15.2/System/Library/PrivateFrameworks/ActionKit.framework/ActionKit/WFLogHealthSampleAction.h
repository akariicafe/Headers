@class NSDate;

@interface WFLogHealthSampleAction : WFAction

@property (retain, nonatomic) NSDate *currentDate;

- (id)appIdentifier;
- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (void)initializeParameters;
- (id)generatedResourceNodes;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)resourceAvailabilityChanged;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)handleWithCategoryType:(id)a0;
- (void)handleWithQuantityType:(id)a0;
- (id)dateForParameterValueWithKey:(id)a0 error:(id *)a1;
- (void)updateParameterStates;
- (void)forceUpdateSelectedUnit;
- (void)saveObject:(id)a0 withObjectType:(id)a1 item:(id)a2;

@end
