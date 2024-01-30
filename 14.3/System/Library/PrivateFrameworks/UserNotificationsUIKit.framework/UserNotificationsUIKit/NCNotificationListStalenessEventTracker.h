@class NSMutableDictionary, NCNotificationListSection, PETScalarEventTracker, NCNotificationStructuredSectionList, NSObject;
@protocol OS_dispatch_queue;

@interface NCNotificationListStalenessEventTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_lastDisplayedDateByNotificationMetadata;
    PETScalarEventTracker *_stalenessEventTracker;
}

@property (weak, nonatomic) NCNotificationListSection *notificationList;
@property (weak, nonatomic) NCNotificationStructuredSectionList *structuredSectionList;

+ (id)eventTrackerWithAutomaticCollation;
+ (id)_allMetricsSafeBundleIdentifiers;
+ (id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)a0;
+ (id)_metricsSafeBundleIdentifierByBundleIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)a0;
- (void)_startAutocollation;
- (void)_stopAutocollation;
- (void)_handleListPresentedEvent;
- (void)_queue_processRequests:(id)a0 timestamp:(id)a1;
- (void)_queue_collateAndRecordMetrics;
- (void)collateAndRecordMetrics;

@end
