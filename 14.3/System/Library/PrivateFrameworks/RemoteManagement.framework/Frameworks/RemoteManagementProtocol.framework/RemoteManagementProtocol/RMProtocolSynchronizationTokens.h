@class NSString, NSDate;

@interface RMProtocolSynchronizationTokens : RMModelPayloadBase

@property (copy, nonatomic) NSDate *tokensTimestamp;
@property (copy, nonatomic) NSString *tokensCapabilitiesToken;
@property (copy, nonatomic) NSString *tokensCommandToken;
@property (copy, nonatomic) NSString *tokensDeclarationsToken;
@property (copy, nonatomic) NSString *tokensOrganizationDetailsToken;

+ (id)requestWithTimestamp:(id)a0 capabilitiesToken:(id)a1 commandToken:(id)a2 declarationsToken:(id)a3 organizationDetailsToken:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
