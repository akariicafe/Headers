@class NSSet, NSString, NSArray;

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadSanName;
@property (copy, nonatomic) NSArray *payloadSanConfigURLs;
@property (copy, nonatomic) NSArray *payloadFsnameservers;
@property (copy, nonatomic) NSString *payloadSanAuthMethod;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withSanName:(id)a1 withSanConfigURLs:(id)a2 withFsnameservers:(id)a3 withSanAuthMethod:(id)a4 withSharedSecret:(id)a5;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withSanName:(id)a1 withSanConfigURLs:(id)a2 withFsnameservers:(id)a3 withSharedSecret:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
