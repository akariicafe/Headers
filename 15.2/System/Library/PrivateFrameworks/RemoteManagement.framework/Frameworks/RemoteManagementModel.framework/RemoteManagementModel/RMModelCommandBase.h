@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *commandPayload;

+ (id)load:(id)a0 serializationType:(short)a1 error:(id *)a2;

- (BOOL)mustBeSupervised;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)executionLevel;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
