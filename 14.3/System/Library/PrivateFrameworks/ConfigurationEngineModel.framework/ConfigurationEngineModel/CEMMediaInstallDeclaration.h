@class NSSet, NSString, NSNumber;

@interface CEMMediaInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadMedia;
@property (copy, nonatomic) NSNumber *payloadMandatory;
@property (copy, nonatomic) NSNumber *payloadInstallWhenActivated;
@property (copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withMedia:(id)a1 withMandatory:(id)a2 withInstallWhenActivated:(id)a3 withRemoveWhenDeactivated:(id)a4;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withMedia:(id)a1 withMandatory:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
