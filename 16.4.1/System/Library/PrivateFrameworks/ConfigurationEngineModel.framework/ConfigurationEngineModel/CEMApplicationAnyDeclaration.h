@class NSSet, NSString, CEMAssetBaseDescriptor;

@interface CEMApplicationAnyDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadDesignatedRequirement;
@property (copy, nonatomic) NSString *payloadSigningIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2 withDesignatedRequirement:(id)a3 withSigningIdentifier:(id)a4;

@end
