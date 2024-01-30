@class NSSet, CEMSystemEnergySaverDeclaration_RepeatingPowerItem;

@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOn;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOff;

+ (id)buildRequiredOnly;
+ (id)buildWithRepeatingPowerOn:(id)a0 withRepeatingPowerOff:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
