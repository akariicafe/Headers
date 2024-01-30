@class NSString, HMDMetricsDateProvider;

@interface HMDLogEventWeekBasedFilter : NSObject <HMDLogEventFiltering>

@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
