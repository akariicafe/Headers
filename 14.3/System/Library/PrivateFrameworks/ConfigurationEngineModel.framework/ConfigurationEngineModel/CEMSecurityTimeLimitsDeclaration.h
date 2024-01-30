@class NSSet, NSString, CEMSecurityTimeLimitsDeclaration_TimeLimits, NSNumber;

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadFamilyControlsEnabled;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_TimeLimits *payloadTimeLimits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withFamilyControlsEnabled:(id)a1 withTimeLimits:(id)a2;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withFamilyControlsEnabled:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
