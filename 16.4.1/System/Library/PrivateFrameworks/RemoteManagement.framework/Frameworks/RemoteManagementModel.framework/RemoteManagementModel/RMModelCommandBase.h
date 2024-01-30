@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *commandPayload;

+ (id)load:(id)a0 serializationType:(short)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (int)executionLevel;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
