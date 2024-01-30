@class NSString;

@interface HKRemoteFeatureAvailabilityAlwaysFalseRule : NSObject <HKRemoteFeatureAvailabilityRule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (BOOL)evaluate;
- (id)initWithRawValue:(id)a0 dataSource:(id)a1;

@end
