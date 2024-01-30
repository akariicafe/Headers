@class NSObject, NSString, _ATXAggregateLogger, ATXNotificationsDedupeTracker, ATXBBNotificationManager, ATXNotificationContextManager, NSMutableSet, ATXNotificationDeliverySuggestionManager, NSXPCListener, ATXModeAppUsageManager, ATXNotificationsRecorderPermanentStore;
@protocol _CDLocalContext, _DKKnowledgeSaving, OS_dispatch_queue, _DKKnowledgeDeleting;

@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate> {
    ATXNotificationsRecorderPermanentStore *_recorder;
    _ATXAggregateLogger *_aggdlogger;
    ATXNotificationContextManager *_contextmanager;
    ATXBBNotificationManager *_bbNotificationManager;
    NSMutableSet *_registrations;
    id<_CDLocalContext> _context;
    ATXNotificationsDedupeTracker *_dedupetracker;
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting> _duetstorer;
    NSXPCListener *_listener;
    ATXModeAppUsageManager *_modeAppUsageManager;
    ATXNotificationDeliverySuggestionManager *_notificationDeliverySuggestionManager;
    NSObject<OS_dispatch_queue> *_donationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2 withReply:(id /* block */)a3;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2;
- (void)resetNotificationsHistory;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerForAppChange;
- (void)_donateNotificationToPortraitWithNotificationsInterface:(id)a0;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1;
- (void)resetSuggestionResponses;
- (id)getDuetMetadataFromNotification:(id)a0 metadata:(id)a1;
- (id)_createPortraitNotificationWithNotificationInterface:(id)a0;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)_logEventToCoreDuet:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2;
- (void)promotingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (id)createMetadataForSuggestion:(id)a0 andType:(long long)a1;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (void)logAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (void)logNotificationDeliveryUI:(unsigned long long)a0 notificationUUIDs:(id)a1;
- (void)logNotification:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)triggerReplay:(id /* block */)a0;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)logSuggestionEvent:(long long)a0 suggestionType:(long long)a1 suggestionIdentifier:(id)a2 timestamp:(id)a3;
- (void)quietingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)logNotificationWithMetadata:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (id)getDuetStream;
- (void)logNotificationToCoreDuet:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logToCoreDuet:(id)a0 identifier:(id)a1 timestamp:(id)a2;
- (id)getLockscreenBundleIds;
- (id)init;
- (id)getSuggestionResponses;
- (id)duetValueType;
- (void)getAppUsageDataFromStartDate:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1 timestamp:(id)a2;

@end
