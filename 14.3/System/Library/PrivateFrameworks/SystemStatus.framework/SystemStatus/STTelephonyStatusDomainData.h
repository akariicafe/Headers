@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (readonly, nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled;
@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataByApplyingDiff:(id)a0;
- (id)_anySIMInfoWithSIMPresent;
- (id)init;
- (id)diffFromData:(id)a0;
- (void).cxx_destruct;
- (id)_dataPreferredSIMInfoIfSIMPresent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_otherSIMInfoIfSIMPresent:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithSIMOneInfo:(id)a0 SIMTwoInfo:(id)a1 cellularRadioCapabilityEnabled:(BOOL)a2 dualSIMEnabled:(BOOL)a3 radioModuleDead:(BOOL)a4;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
