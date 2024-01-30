@interface HMDHouseholdMetricsRequestContributor : HMDHouseholdActivityLogEventContributor <HMDHouseholdMetricsRequestCountProvider>

- (void)coalesceLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)deserializeLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)incrementRequestCountForHomeUUID:(id)a0 date:(id)a1;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1;
- (void)populateLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;

@end
