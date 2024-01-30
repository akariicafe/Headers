@class NSSet, NSString, NSNumber;

@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadForceLimitAdTracking;
@property (copy, nonatomic) NSNumber *payloadSafariAllowAutoFill;
@property (copy, nonatomic) NSNumber *payloadSafariForceFraudWarning;
@property (copy, nonatomic) NSNumber *payloadSafariAllowJavaScript;
@property (copy, nonatomic) NSNumber *payloadSafariAllowPopups;
@property (copy, nonatomic) NSNumber *payloadSafariAcceptCookies;
@property (copy, nonatomic) NSNumber *payloadForceAuthenticationBeforeAutoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withForceLimitAdTracking:(id)a1 withSafariAllowAutoFill:(id)a2 withSafariForceFraudWarning:(id)a3 withSafariAllowJavaScript:(id)a4 withSafariAllowPopups:(id)a5 withSafariAcceptCookies:(id)a6 withForceAuthenticationBeforeAutoFill:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
