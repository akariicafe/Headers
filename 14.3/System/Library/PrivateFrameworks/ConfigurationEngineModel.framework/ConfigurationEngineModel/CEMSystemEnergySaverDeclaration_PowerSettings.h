@class NSSet, NSNumber;

@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadDisplaySleepTimer;
@property (copy, nonatomic) NSNumber *payloadDiskSleepTimer;
@property (copy, nonatomic) NSNumber *payloadSystemSleepTimer;
@property (copy, nonatomic) NSNumber *payloadReduceProcessorSpeed;
@property (copy, nonatomic) NSNumber *payloadDynamicPowerStep;
@property (copy, nonatomic) NSNumber *payloadWakeOnLAN;
@property (copy, nonatomic) NSNumber *payloadWakeOnModemRing;
@property (copy, nonatomic) NSNumber *payloadAutomaticRestartOnPowerLoss;

+ (id)buildRequiredOnly;
+ (id)buildWithDisplaySleepTimer:(id)a0 withDiskSleepTimer:(id)a1 withSystemSleepTimer:(id)a2 withReduceProcessorSpeed:(id)a3 withDynamicPowerStep:(id)a4 withWakeOnLAN:(id)a5 withWakeOnModemRing:(id)a6 withAutomaticRestartOnPowerLoss:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
