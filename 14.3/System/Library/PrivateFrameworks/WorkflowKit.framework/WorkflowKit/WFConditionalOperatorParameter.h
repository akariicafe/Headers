@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSArray *possibleContentOperators;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) unsigned long long displayableTimeUnits;
@property (readonly, nonatomic) BOOL usingLegacyOperatorBehavior;

- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (Class)stateClass;
- (id)importQuestionBehavior;
- (BOOL)allowsMultipleValues;
- (void)setPossibleContentOperators:(id)a0 withContentType:(long long)a1 displayableTimeUnits:(unsigned long long)a2 usingLegacyOperatorBehavior:(BOOL)a3;

@end
