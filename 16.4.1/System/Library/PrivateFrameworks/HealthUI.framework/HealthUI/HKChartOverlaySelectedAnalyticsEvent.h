@class NSString, HKDisplayTypeContextItem, HKChartOverlaySelectedAnalyticsEventConfiguration;

@interface HKChartOverlaySelectedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HKChartOverlaySelectedAnalyticsEventConfiguration *_configuration;
    HKDisplayTypeContextItem *_previousItem;
    HKDisplayTypeContextItem *_currentItem;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)determineFeatureVersionWithHealthDataSource:(id)a0;
- (id)initWithConfiguration:(id)a0 previousItem:(id)a1 currentItem:(id)a2;

@end
