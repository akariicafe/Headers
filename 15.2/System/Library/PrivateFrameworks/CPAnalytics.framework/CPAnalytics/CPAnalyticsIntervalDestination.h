@class NSSet;

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination

@property (readonly, nonatomic) NSSet *trackedIntervalNames;
@property (readonly, nonatomic) NSSet *ignoredIntervalNames;

- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void)_handleEvent:(id)a0 withUnknownIntervalName:(id)a1;
- (id)_intervalNamesForKey:(id)a0 inConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)sendDashboardIntervalEventForEvent:(id)a0;
- (void)updateWithConfig:(id)a0;

@end
