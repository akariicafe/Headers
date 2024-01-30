@protocol HKRemoteFeatureAvailabilityDataSource;

@interface HKRemoteFeatureAvailabilityBaseRule : NSObject

@property (weak, nonatomic) id<HKRemoteFeatureAvailabilityDataSource> dataSource;

+ (Class)ruleClassForRawValue:(id)a0;

- (BOOL)evaluate;
- (void)processUserInfo:(id)a0;
- (id)initWithRawValue:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;

@end
