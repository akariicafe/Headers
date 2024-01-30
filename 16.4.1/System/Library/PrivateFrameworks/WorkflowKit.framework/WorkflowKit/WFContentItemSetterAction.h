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
- (id)parameterDefinitions;
- (id)appContentDestinationForSystemAppBundleIdentifier:(id)a0;
- (id)changeTransactionWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)defaultOutputName;
- (id)descriptionSummary;
- (id)displayStringForTransactionModeState:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (void)initializeParameters;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (BOOL)inputsMultipleItems;
- (id)outputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterKeyForProperty:(id)a0;
- (id)parameterSummaryDefinition;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)presentAlertWithUserInterface:(id)a0 input:(id)a1 completion:(id /* block */)a2;
- (id)requiredResourceForProperty:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)setAdditionalPropertyIfNecessaryForValue:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)setPromptForSelectedParameter;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)userValueForSelectedPropertyWithCompletion:(id /* block */)a0;

@end
