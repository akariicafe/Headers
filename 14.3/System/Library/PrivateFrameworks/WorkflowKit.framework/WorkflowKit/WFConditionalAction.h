@class NSString;
@protocol WFVariableProvider;

@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate>

@property (weak, nonatomic) id<WFVariableProvider> parentVariableProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializedParametersForHome:(id)a0;

- (void).cxx_destruct;
- (id)name;
- (BOOL)isDeletable;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)inputRequired;
- (BOOL)inputPassthrough;
- (BOOL)skipsProcessingHiddenParameters;
- (id)possibleContentClassesForVariableNamed:(id)a0 context:(id)a1;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (id)actionsProvidingVariableName:(id)a0;
- (id)copyForProcessing;
- (BOOL)populatesInputFromInputParameter;
- (BOOL)usesLegacyInputBehavior;
- (id)createAccompanyingActions;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)inputContentClasses;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)inputSourceInWorkflow:(id)a0;
- (id)minimumSupportedClientVersion;
- (id)defaultOutputName;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)variableDidChange:(id)a0;
- (id)fileSizeForQuantityValue:(id)a0;
- (id)timeIntervalForQuantityValue:(id)a0;
- (id)measurementForQuantityValue:(id)a0;
- (id)predicateForComparisonOperator:(long long)a0 rightDate:(id)a1 secondRightDate:(id)a2 comparableTimeUnits:(unsigned long long)a3 rightDurationValue:(id)a4;
- (void)setTruth:(BOOL)a0 withVariableSource:(id)a1;
- (BOOL)truthWithVariableSource:(id)a0;
- (BOOL)groupContainsOtherwiseAction;
- (Class)settingsViewControllerClass;
- (void)reloadOpenActionInWorkflow:(id)a0;
- (id)subjectState;
- (long long)subjectContentType;
- (void)updatePossibleOperators;
- (void)updateRightExpressionParameters;
- (BOOL)useLegacyComparisonBehavior;
- (void)clearLegacyComparisonBehaviorFlag;

@end
