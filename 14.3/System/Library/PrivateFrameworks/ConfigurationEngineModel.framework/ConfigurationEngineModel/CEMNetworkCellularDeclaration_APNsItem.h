@class NSSet, NSString, NSNumber;

@interface CEMNetworkCellularDeclaration_APNsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadAuthenticationType;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyPort;
@property (copy, nonatomic) NSNumber *payloadDefaultProtocolMask;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMask;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMaskInRoaming;

+ (id)buildRequiredOnlyWithName:(id)a0;
+ (id)buildWithName:(id)a0 withAuthenticationType:(id)a1 withUsername:(id)a2 withPassword:(id)a3 withProxyServer:(id)a4 withProxyPort:(id)a5 withDefaultProtocolMask:(id)a6 withAllowedProtocolMask:(id)a7 withAllowedProtocolMaskInRoaming:(id)a8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
