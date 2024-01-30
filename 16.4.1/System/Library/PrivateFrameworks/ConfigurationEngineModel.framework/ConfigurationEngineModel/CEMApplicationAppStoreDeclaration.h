@class NSSet, NSString, CEMAssetBaseDescriptor, NSNumber;

@interface CEMApplicationAppStoreDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSNumber *payloadITunesStoreID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2 withITunesStoreID:(id)a3;
+ (id)buildWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2 withITunesStoreID:(id)a3;

@end
