@class RMModelAccountMailDeclaration_OutgoingServer, NSSet, NSString, RMModelAccountMailDeclaration_IncomingServer;

@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVisibleName;
@property (copy, nonatomic) NSString *payloadUserIdentityAssetReference;
@property (copy, nonatomic) RMModelAccountMailDeclaration_IncomingServer *payloadIncomingServer;
@property (copy, nonatomic) RMModelAccountMailDeclaration_OutgoingServer *payloadOutgoingServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 incomingServer:(id)a1 outgoingServer:(id)a2;
+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 userIdentityAssetReference:(id)a2 incomingServer:(id)a3 outgoingServer:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
