@class NSString, RMModelAnyPayload;

@interface RMModelDeclarationBase : RMModelPayloadBase

@property (class, readonly, copy) NSString *declarationClassType;

@property (copy, nonatomic) NSString *declarationType;
@property (copy, nonatomic) NSString *declarationIdentifier;
@property (copy, nonatomic) NSString *declarationServerToken;
@property (copy, nonatomic) RMModelAnyPayload *declarationPayload;

+ (id)load:(id)a0 serializationType:(short)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;
- (void)updateServerToken;

@end
