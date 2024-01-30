@class NSSet, NSString, RMModelAssetBaseReference;

@interface RMModelCredentialUserNameAndPasswordDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) RMModelAssetBaseReference *payloadReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 reference:(id)a1;
+ (id)buildWithIdentifier:(id)a0 reference:(id)a1;

@end
