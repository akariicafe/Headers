@class NSArray;

@interface WFChooseFromMenuItemParameterState : WFVariableStringParameterState

@property (readonly, nonatomic) NSArray *synonyms;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (BOOL)shouldSerializeAsPlainString;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1 synonyms:(id)a2;
- (id)initWithVariableString:(id)a0 synonyms:(id)a1;

@end
