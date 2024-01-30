@class NSSet;

@interface WFInputAction : WFAction

@property (retain, nonatomic) NSSet *inputSurfaces;

+ (id)inputActionForWorkflow:(id)a0;
+ (id)serializedParametersForWorkflow:(id)a0;
+ (id)serializedParametersFromActionSerializedParameters:(id)a0 itemClass:(Class)a1;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)noInputBehavior;
- (id)actionSerializedParametersForSelectionOfItemClass:(Class)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)minimumSupportedClientVersion;
- (void)removedFromWorkflow;
- (id)selectedAskForType;
- (id)selectedBehavior;
- (id)selectedInputTypes;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)updateWorkflowState;

@end
