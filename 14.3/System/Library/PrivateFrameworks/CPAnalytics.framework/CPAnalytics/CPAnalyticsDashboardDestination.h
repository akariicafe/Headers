@class NSArray, CPAnalytics, NSString;

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination>

@property (class, readonly, nonatomic) BOOL disabled;

@property (readonly, weak, nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (readonly, nonatomic) NSArray *allStandardProperties;
@property (readonly, nonatomic) NSArray *allMediaProperties;
@property (readonly, nonatomic) NSArray *allErrorProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)processEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isMediaEvent:(id)a0;
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)a0 fromSourceEvent:(id)a1 payload:(id)a2;
- (id)buildCoreAnalyticsEventPayloadWithProperties:(id)a0 fromSourceEvent:(id)a1 intoTargetEventPayload:(id)a2;
- (void)reportMalformedEvent:(id)a0 malformationDescriptionWithFormat:(id)a1;

@end
