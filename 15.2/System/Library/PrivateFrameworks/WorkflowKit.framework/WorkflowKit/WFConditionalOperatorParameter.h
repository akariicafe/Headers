@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSArray *possibleContentOperators;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) unsigned long long displayableTimeUnits;
@property (readonly, nonatomic) BOOL usingLegacyOperatorBehavior;

- (void).cxx_destruct;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (id)importQuestionBehavior;
- (Class)stateClass;
- (void)setPossibleContentOperators:(id)a0 withContentType:(long long)a1 displayableTimeUnits:(unsigned long long)a2 usingLegacyOperatorBehavior:(BOOL)a3;

@end
