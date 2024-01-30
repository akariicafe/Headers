@class NSArray, RMModelAnyPayload;

@interface RMProtocolStatusReport : RMModelPayloadBase

@property (copy, nonatomic) RMModelAnyPayload *reportStatusItems;
@property (copy, nonatomic) NSArray *reportErrors;

+ (id)requestWithStatusItems:(id)a0 errors:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
