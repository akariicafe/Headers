@class NSSet, NSString, NSNumber;

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword;
@property (copy, nonatomic) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword;
@property (copy, nonatomic) NSNumber *payloadAllowAirPlayIncomingRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withForceAirPlayOutgoingRequestsPairingPassword:(id)a1 withForceAirPlayIncomingRequestsPairingPassword:(id)a2 withAllowAirPlayIncomingRequests:(id)a3;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)multipleAllowed;

@end
