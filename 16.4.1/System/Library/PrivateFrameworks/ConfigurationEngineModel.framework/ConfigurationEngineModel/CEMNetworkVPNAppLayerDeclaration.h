@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSArray *payloadSafariDomains;
@property (copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled;
@property (copy, nonatomic) NSArray *payloadSMBDomains;
@property (copy, nonatomic) NSString *payloadProviderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withVPNUUID:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withVPNUUID:(id)a1 withSafariDomains:(id)a2 withOnDemandMatchAppEnabled:(id)a3 withSMBDomains:(id)a4 withProviderType:(id)a5;
+ (id)restrictionPayloadKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
