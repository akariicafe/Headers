@class NSString, NSDateComponents;

@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement> {
    NSDateComponents *_dateComponents;
}

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeatureIdentifier:(id)a0 daysBeforeCurrentDate:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;

@end
