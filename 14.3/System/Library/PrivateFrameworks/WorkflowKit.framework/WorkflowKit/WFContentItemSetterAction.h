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
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (BOOL)inputRequired;
- (BOOL)outputsMultipleItems;
- (id)defaultOutputName;
- (id)descriptionSummary;
- (id)inputParameterKey;
- (id)parameterDefinitions;
- (id)possibleStatesForEnumeration:(id)a0;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
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

@end
