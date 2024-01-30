@class NSSet, NSString;

@interface CEMSystemAirPlaySecurityDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadSecurityType;
@property (copy, nonatomic) NSString *payloadAccessType;
@property (copy, nonatomic) NSString *payloadPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withSecurityType:(id)a1 withAccessType:(id)a2 withPassword:(id)a3;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withSecurityType:(id)a1 withAccessType:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
