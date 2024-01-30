@class NSString, NSMutableArray;

@interface HKRemoteFeatureAvailabilityCompoundRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (retain, nonatomic) NSString *grouping;
@property (retain, nonatomic) NSMutableArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (void)processUserInfo:(id)a0;
- (BOOL)evaluate;

@end
