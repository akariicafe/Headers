@class NSString;

@interface HKRemoteFeatureAvailabilityWatchBuildTypeEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (retain, nonatomic) NSString *buildType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (BOOL)evaluate;
- (void)processUserInfo:(id)a0;
- (void).cxx_destruct;

@end
