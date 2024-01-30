@class NSString;

@interface HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (retain, nonatomic) NSString *modelNumberPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)processUserInfo:(id)a0;

@end
