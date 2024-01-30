@protocol HKRemoteFeatureAvailabilityDataSource;

@interface HKRemoteFeatureAvailabilityBaseRule : NSObject

@property (weak, nonatomic) id<HKRemoteFeatureAvailabilityDataSource> dataSource;

+ (Class)ruleClassForRawValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithRawValue:(id)a0 dataSource:(id)a1;
- (void)processUserInfo:(id)a0;
- (BOOL)evaluate;

@end
