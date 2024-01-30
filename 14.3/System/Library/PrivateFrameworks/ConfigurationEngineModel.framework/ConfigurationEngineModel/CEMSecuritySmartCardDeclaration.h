@class NSSet, NSString, NSNumber;

@interface CEMSecuritySmartCardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadUserPairing;
@property (copy, nonatomic) NSNumber *payloadAllowSmartCard;
@property (copy, nonatomic) NSNumber *payloadCheckCertificateTrust;
@property (copy, nonatomic) NSNumber *payloadOneCardPerUser;
@property (copy, nonatomic) NSNumber *payloadTokenRemovalAction;
@property (copy, nonatomic) NSNumber *payloadEnforceSmartCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withUserPairing:(id)a1 withAllowSmartCard:(id)a2 withCheckCertificateTrust:(id)a3 withOneCardPerUser:(id)a4 withTokenRemovalAction:(id)a5 withEnforceSmartCard:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
