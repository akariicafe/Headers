@class NSDictionary, NSString, HMCharacteristic;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState

@property (retain, nonatomic) NSDictionary *serializedCharacteristic;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) HMCharacteristic *characteristic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)containedVariables;
- (id)initWithCharacteristic:(id)a0 homeIdentifier:(id)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
