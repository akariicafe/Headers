@class VKAnalyticsMRCEvent, NSString, NSDate, VKAnalyticsTextEvent, VKAnalyticsQuickActionEvent, VKAnalyticsDataScannerEvent, VKAnalyticsSubjectEvent, VKAnalyticsAnalyzerEvent, VKAnalyticsDDEvent, VKAnalyticsVisualSearchEvent, VKAnalyticsInteractionEvent;

@interface VKAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL isPerformingAutomatedTest;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) VKAnalyticsAnalyzerEvent *analyzerEvent;
@property (readonly, nonatomic) VKAnalyticsTextEvent *textEvent;
@property (readonly, nonatomic) VKAnalyticsDDEvent *ddEvent;
@property (readonly, nonatomic) VKAnalyticsMRCEvent *mrcEvent;
@property (readonly, nonatomic) VKAnalyticsInteractionEvent *interactionEvent;
@property (readonly, nonatomic) VKAnalyticsVisualSearchEvent *visualSearchEvent;
@property (readonly, nonatomic) VKAnalyticsQuickActionEvent *quickActionEvent;
@property (readonly, nonatomic) VKAnalyticsSubjectEvent *subjectEvent;
@property (readonly, nonatomic) VKAnalyticsDataScannerEvent *dataScannerEvent;

- (id)coreAnalyticsDictionary;
- (id)eventKey;
- (id)initWithCustomIdentifier:(id)a0;
- (void).cxx_destruct;

@end
