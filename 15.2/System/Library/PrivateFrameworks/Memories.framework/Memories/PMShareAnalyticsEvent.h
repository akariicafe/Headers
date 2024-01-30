@class NSString;

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)eventName;
- (void)sendToCoreAnalytics;
- (id)initWithActivityType:(id)a0 isLandscape:(BOOL)a1;

@end
