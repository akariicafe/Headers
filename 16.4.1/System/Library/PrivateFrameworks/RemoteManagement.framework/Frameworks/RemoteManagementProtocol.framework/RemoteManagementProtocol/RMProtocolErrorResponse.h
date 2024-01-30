@class NSString, RMModelAnyPayload;

@interface RMProtocolErrorResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseCode;
@property (copy, nonatomic) NSString *responseDescription;
@property (copy, nonatomic) RMModelAnyPayload *responseDetails;

+ (id)requestWithCode:(id)a0 description:(id)a1 details:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
