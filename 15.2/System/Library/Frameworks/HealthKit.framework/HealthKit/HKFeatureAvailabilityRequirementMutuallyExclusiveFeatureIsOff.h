@class NSString;

@interface HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff : NSObject <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *settingsOnKey;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(BOOL)a1;
- (BOOL)_isFeatureOnWithOnboardingRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isSatisfiedWithOnboardingRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(BOOL)a2;

@end
