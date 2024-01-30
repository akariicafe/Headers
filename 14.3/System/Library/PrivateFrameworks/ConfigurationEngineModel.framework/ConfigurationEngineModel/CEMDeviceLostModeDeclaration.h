@class NSSet, NSString, NSNumber;

@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadEnable;
@property (copy, nonatomic) NSString *payloadMessage;
@property (copy, nonatomic) NSString *payloadPhoneNumber;
@property (copy, nonatomic) NSString *payloadFootnote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withEnable:(id)a1 withMessage:(id)a2 withPhoneNumber:(id)a3 withFootnote:(id)a4;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withEnable:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
