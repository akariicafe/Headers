@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSNumber *payloadTokenCard;
@property (copy, nonatomic) NSString *payloadCommRemoteAddress;
@property (copy, nonatomic) NSArray *payloadAuthEAPPlugins;
@property (copy, nonatomic) NSArray *payloadAuthProtocol;
@property (copy, nonatomic) NSNumber *payloadCCPMPPE40Enabled;
@property (copy, nonatomic) NSNumber *payloadCCPMPPE128Enabled;
@property (copy, nonatomic) NSNumber *payloadCCPEnabled;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;

+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)a0 withAuthPassword:(id)a1 withTokenCard:(id)a2 withCommRemoteAddress:(id)a3 withAuthEAPPlugins:(id)a4 withAuthProtocol:(id)a5 withCCPMPPE40Enabled:(id)a6 withCCPMPPE128Enabled:(id)a7 withCCPEnabled:(id)a8 withDisconnectOnIdle:(id)a9 withDisconnectOnIdleTimer:(id)a10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
