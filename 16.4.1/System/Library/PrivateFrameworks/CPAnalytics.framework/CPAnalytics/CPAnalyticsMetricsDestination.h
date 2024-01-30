@class NSString, NSMapTable;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) NSMapTable *eventRoutes;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithConfig:(id)a0;
- (void)processEvent:(id)a0;
- (void)sendCoreAnalyticsEventWithCustomConfig:(id)a0 eventRoute:(id)a1;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)a0 withPropertiesToInclude:(id)a1;
- (id)_eventRoutesFromConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;

@end
