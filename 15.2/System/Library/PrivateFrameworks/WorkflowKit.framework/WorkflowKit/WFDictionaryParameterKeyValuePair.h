@class NSUUID, WFPropertyListParameterValue, WFVariableString, NSString;

@interface WFDictionaryParameterKeyValuePair : NSObject <WFVariableSerialization, NSCopying>

@property (readonly, nonatomic) WFVariableString *key;
@property (readonly, nonatomic) WFPropertyListParameterValue *value;
@property (readonly, nonatomic) NSUUID *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (id)initWithKey:(id)a0 value:(id)a1 identity:(id)a2;
- (void)getProcessedPair:(id /* block */)a0 context:(id)a1 userInputRequiredHandler:(id /* block */)a2;

@end
