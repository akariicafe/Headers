@class WFContentProperty, NSArray, NSString;

@interface WFContentItemSetterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentProperty *selectedProperty;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keywords;
- (id)name;
- (id)possibleStatesForEnumeration:(id)a0;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (void)initializeParameters;
- (BOOL)inputRequired;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)outputsMultipleItems;
- (id)defaultOutputName;
- (id)descriptionSummary;
- (id)inputParameterKey;
- (id)parameterDefinitions;
- (BOOL)inputsMultipleItems;
- (id)parameterSummaryDefinition;
- (id)parameterKeyForProperty:(id)a0;
- (id)requiredResourceForProperty:(id)a0;
- (void)setPromptForSelectedParameter;
- (id)displayStringForTransactionModeState:(id)a0;
- (id)changeTransactionWithInput:(id)a0;
- (void)userValueForSelectedPropertyWithCompletion:(id /* block */)a0;
- (void)presentAlertWithUserInterface:(id)a0 input:(id)a1 completion:(id /* block */)a2;
- (id)setAdditionalPropertyIfNecessaryForValue:(id)a0;
- (id)appContentDestinationForSystemAppBundleIdentifier:(id)a0;

@end
