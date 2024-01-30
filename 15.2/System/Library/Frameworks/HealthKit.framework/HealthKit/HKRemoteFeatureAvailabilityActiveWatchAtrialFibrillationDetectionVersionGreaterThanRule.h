@class NSString;

@interface HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionGreaterThanRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } targetVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void)processUserInfo:(id)a0;
- (BOOL)evaluate;

@end
