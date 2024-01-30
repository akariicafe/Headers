@class NSSet, NSString, RMModelAnyPayload;

@interface RMModelManagementServerCapabilitiesDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVersion;
@property (copy, nonatomic) RMModelAnyPayload *payloadSupportedFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 version:(id)a1 supportedFeatures:(id)a2;
+ (id)buildWithIdentifier:(id)a0 version:(id)a1 supportedFeatures:(id)a2;

@end
