@protocol HMDHouseholdMetricsDataSource;

@interface HMDMetricsAccessoryDetailsManager : HMFObject <HMDHouseholdMetricsLogEventFactory>

@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)householdMetricsLogEventFactory;
- (id)accessoryCategoryLogEventsForHomeWithUUID:(id)a0;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;

@end
