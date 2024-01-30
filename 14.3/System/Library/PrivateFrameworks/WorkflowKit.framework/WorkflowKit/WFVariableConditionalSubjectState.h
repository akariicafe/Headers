@class WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;

+ (id)subjectType;

- (unsigned long long)tense;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (long long)contentType;
- (unsigned long long)hash;
- (id)unitType;
- (BOOL)isEqual:(id)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEnumeration;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (id)containedVariables;
- (unsigned long long)displayableTimeUnits;
- (BOOL)isCaseInsensitive;
- (unsigned long long)comparableTimeUnits;
- (id)supportedComparisonOperators;
- (BOOL)isIrrational;
- (id)initWithVariableState:(id)a0;
- (Class)contentClassProvidingContentProperty;

@end
