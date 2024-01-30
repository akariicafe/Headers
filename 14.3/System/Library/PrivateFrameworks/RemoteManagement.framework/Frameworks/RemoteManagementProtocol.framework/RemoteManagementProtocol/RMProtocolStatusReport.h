@class NSArray, RMModelAnyPayload;

@interface RMProtocolStatusReport : RMModelPayloadBase

@property (copy, nonatomic) RMModelAnyPayload *reportStatusItems;
@property (copy, nonatomic) NSArray *reportErrors;

+ (id)requestWithStatusItems:(id)a0 errors:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
