@class NSString;

@interface STBatteryStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long chargingState;
@property (readonly, nonatomic) unsigned long long percentCharge;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (readonly, copy, nonatomic) NSString *chargingDescription;
@property (readonly, nonatomic) unsigned long long chargingDescriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataByApplyingDiff:(id)a0;
- (id)init;
- (id)diffFromData:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithData:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithChargingState:(unsigned long long)a0 percentCharge:(unsigned long long)a1 batterySaverModeActive:(BOOL)a2 chargingDescription:(id)a3 chargingDescriptionType:(unsigned long long)a4;

@end
