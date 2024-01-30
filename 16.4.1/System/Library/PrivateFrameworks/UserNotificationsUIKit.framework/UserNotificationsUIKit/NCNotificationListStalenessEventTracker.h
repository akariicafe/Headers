@class NSMutableDictionary, NCNotificationListSection, PETScalarEventTracker, NCNotificationStructuredSectionList, NSObject;
@protocol OS_dispatch_queue;

@interface NCNotificationListStalenessEventTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_lastDisplayedDateByNotificationMetadata;
    PETScalarEventTracker *_stalenessEventTracker;
}

@property (weak, nonatomic) NCNotificationListSection *notificationList;
@property (weak, nonatomic) NCNotificationStructuredSectionList *structuredSectionList;

+ (id)_allMetricsSafeBundleIdentifiers;
+ (id)_metricsSafeBundleIdentifierByBundleIdentifier;
+ (id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)a0;
+ (id)eventTrackerWithAutomaticCollation;

- (void)handleEvent:(unsigned long long)a0;
- (void)_queue_processRequests:(id)a0 timestamp:(id)a1;
- (void)_startAutocollation;
- (void)_stopAutocollation;
- (void)_handleListPresentedEvent;
- (void)dealloc;
- (void)_queue_collateAndRecordMetrics;
- (void)collateAndRecordMetrics;
- (id)init;
- (void).cxx_destruct;

@end
