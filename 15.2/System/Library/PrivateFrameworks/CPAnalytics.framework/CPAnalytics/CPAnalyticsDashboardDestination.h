@class NSArray, CPAnalytics, NSString;

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination>

@property (readonly, weak, nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (readonly, nonatomic) NSArray *allStandardProperties;
@property (readonly, nonatomic) NSArray *allMediaProperties;
@property (readonly, nonatomic) NSArray *allErrorProperties;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithConfig:(id)a0;
- (BOOL)isMediaEvent:(id)a0;
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)a0 fromSourceEvent:(id)a1 payload:(id)a2;
- (id)buildCoreAnalyticsEventPayloadWithProperties:(id)a0 fromSourceEvent:(id)a1 intoTargetEventPayload:(id)a2;
- (void)reportMalformedEvent:(id)a0 malformationDescriptionWithFormat:(id)a1;

@end
