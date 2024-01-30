@class NSString, NSUUID;

@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *nanoRegistryCapability;
@property (readonly, nonatomic, getter=isSupportedOnLocalDevice) BOOL supportedOnLocalDevice;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isSatisfiedWithDataSource:(id)a0;
- (id)initWithNanoRegistryCapability:(id)a0 supportedOnLocalDevice:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
