@class WFControlFlowAttributionTracker;

@interface WFControlFlowAction : WFAction

@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) WFControlFlowAttributionTracker *controlFlowTracker;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (id)iconImage;
- (id)shortName;
- (BOOL)isDeletable;
- (void).cxx_destruct;
- (id)serializedParameters;
- (id)iconName;
- (BOOL)hasChildren;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (id)outputContentClasses;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputPassthrough;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (BOOL)displaysParameterSummary;
- (void)generateGroupingIdentifierIfNecessary;
- (id)createAccompanyingActionWithMode:(long long)a0;
- (BOOL)snappingPassthrough;
- (BOOL)inputTypePassthrough;
- (id)outputIconImage;
- (id)groupedOpenAction;
- (id)groupedCloseAction;
- (id)groupedIntermediaryActions;

@end
