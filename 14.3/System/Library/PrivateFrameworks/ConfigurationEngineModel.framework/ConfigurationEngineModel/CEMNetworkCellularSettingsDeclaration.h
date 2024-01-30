@class NSSet, NSString, NSNumber;

@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowDataRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowVoiceRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowPersonalHotspot;
@property (copy, nonatomic) NSNumber *payloadAllowGlobalBackgroundFetchWhenRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowCellularPlanModification;
@property (copy, nonatomic) NSNumber *payloadAllowAppCellularDataModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withAllowDataRoaming:(id)a1 withAllowVoiceRoaming:(id)a2 withAllowPersonalHotspot:(id)a3 withAllowGlobalBackgroundFetchWhenRoaming:(id)a4 withAllowCellularPlanModification:(id)a5 withAllowAppCellularDataModification:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
