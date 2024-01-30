@class SignpostSupportExactProcessNameFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter, SignpostSupportPIDFilter;

@interface SignpostSerializationFilterConfiguration : NSObject

@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (retain, nonatomic) SignpostSupportPIDFilter *pidFilter;
@property (retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter;
@property (retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter;

- (void).cxx_destruct;

@end
