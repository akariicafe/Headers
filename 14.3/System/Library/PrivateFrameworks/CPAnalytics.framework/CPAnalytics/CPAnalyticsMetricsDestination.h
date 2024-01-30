@class NSString, NSMapTable;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>

@property (class, readonly, nonatomic) BOOL disabled;

@property (readonly, nonatomic) NSMapTable *eventRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)processEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)a0 withPropertiesToInclude:(id)a1;
- (void).cxx_destruct;
- (void)_sendCoreAnalyticsEvent:(id)a0 eventPayload:(id)a1;
- (void)_sendCoreAnalyticsEventWithCustomConfig:(id)a0 eventRoute:(id)a1;

@end
