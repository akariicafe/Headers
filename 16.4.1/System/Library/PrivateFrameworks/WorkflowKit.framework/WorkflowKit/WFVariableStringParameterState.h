@class WFVariable, NSString, WFVariableString;

@interface WFVariableStringParameterState : NSObject <WFVariableSupportingParameterState>

@property (readonly, copy, nonatomic) WFVariableString *variableString;
@property (readonly, nonatomic) long long userInputInsertionIndex;
@property (readonly, nonatomic) BOOL shouldSerializeAsPlainString;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (id)initWithVariable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithVariableString:(id)a0;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)stateByReplacingVariable:(id)a0 withVariable:(id)a1;

@end
