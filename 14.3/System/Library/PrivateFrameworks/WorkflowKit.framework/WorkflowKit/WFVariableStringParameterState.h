@class NSString, WFVariableString;

@interface WFVariableStringParameterState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) WFVariableString *variableString;
@property (readonly, nonatomic) long long userInputInsertionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1;
- (id)initWithVariableString:(id)a0;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;

@end
