@class NSNumber, NSSet, NSString, CEMSystemEnergySaverDeclaration_PowerSettings, CEMSystemEnergySaverDeclaration_EnergySaverSchedule;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule;
@property (copy, nonatomic) NSNumber *payloadSleepDisabled;
@property (copy, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withComappleEnergySaverdesktopACPower:(id)a1 withComappleEnergySaverportableACPower:(id)a2 withComappleEnergySaverportableBatteryPower:(id)a3 withComappleEnergySaverdesktopSchedule:(id)a4 withSleepDisabled:(id)a5 withDestroyFVKeyOnStandby:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
