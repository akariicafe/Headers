@class NSString, RMModelAnyPayload;

@interface RMProtocolEnrollRequest : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestEnrollmentToken;
@property (copy, nonatomic) RMModelAnyPayload *requestStatusItems;

+ (id)requestWithEnrollmentToken:(id)a0 statusItems:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
