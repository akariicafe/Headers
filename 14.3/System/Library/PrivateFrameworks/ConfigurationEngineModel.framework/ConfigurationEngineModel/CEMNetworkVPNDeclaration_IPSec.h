@class NSSet, NSString, NSData, NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadXAuthName;
@property (copy, nonatomic) NSString *payloadXAuthPassword;
@property (copy, nonatomic) NSNumber *payloadXAuthEnabled;
@property (copy, nonatomic) NSString *payloadXAuthPasswordEncryption;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadLocalIdentifierType;
@property (copy, nonatomic) NSData *payloadSharedSecret;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadPromptForVPNPIN;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;

+ (id)buildRequiredOnly;
+ (id)buildWithRemoteAddress:(id)a0 withAuthenticationMethod:(id)a1 withXAuthName:(id)a2 withXAuthPassword:(id)a3 withXAuthEnabled:(id)a4 withXAuthPasswordEncryption:(id)a5 withLocalIdentifier:(id)a6 withLocalIdentifierType:(id)a7 withSharedSecret:(id)a8 withPayloadCertificateUUID:(id)a9 withPromptForVPNPIN:(id)a10 withOnDemandEnabled:(id)a11 withOnDemandMatchDomainsAlways:(id)a12 withOnDemandMatchDomainsNever:(id)a13 withOnDemandMatchDomainsOnRetry:(id)a14 withOnDemandRules:(id)a15 withDisconnectOnIdle:(id)a16 withDisconnectOnIdleTimer:(id)a17;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
