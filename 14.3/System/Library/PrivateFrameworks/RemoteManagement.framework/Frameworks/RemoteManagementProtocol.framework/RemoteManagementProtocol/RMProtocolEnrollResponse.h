@class NSString, RMProtocolServerCapabilities, NSArray, RMProtocolOrganizationDetails;

@interface RMProtocolEnrollResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responsePushTopic;
@property (copy, nonatomic) NSString *responsePushEnvironment;
@property (copy, nonatomic) NSString *responseOrganizationDetailsToken;
@property (copy, nonatomic) RMProtocolOrganizationDetails *responseOrganizationDetails;
@property (copy, nonatomic) NSString *responseCapabilitiesToken;
@property (copy, nonatomic) RMProtocolServerCapabilities *responseCapabilities;
@property (copy, nonatomic) NSArray *responseStatusItems;

+ (id)requestWithPushTopic:(id)a0 pushEnvironment:(id)a1 organizationDetailsToken:(id)a2 organizationDetails:(id)a3 capabilitiesToken:(id)a4 capabilities:(id)a5 statusItems:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
