@class NSUserDefaults, NSString, _ATXAggregateLogger, ATXNotificationsSuggestion, ATXBBNotificationManager, ATXNotificationContextManager, ATXNotificationsDedupeTracker, NSMutableSet, NSObject, NSXPCListener, ATXModeAppUsageManager, ATXNotificationsRecorderPermanentStore;
@protocol _CDLocalContext, _DKKnowledgeSaving, OS_dispatch_queue, _DKKnowledgeDeleting;

@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate> {
    ATXNotificationsRecorderPermanentStore *_recorder;
    ATXNotificationsSuggestion *_quietingsuggester;
    ATXNotificationsSuggestion *_promotesuggester;
    ATXNotificationsSuggestion *_rttOutcomeLogger;
    _ATXAggregateLogger *_aggdlogger;
    ATXNotificationContextManager *_contextmanager;
    ATXBBNotificationManager *_bbNotificationManager;
    NSMutableSet *_registrations;
    id<_CDLocalContext> _context;
    ATXNotificationsDedupeTracker *_dedupetracker;
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting> _duetstorer;
    NSXPCListener *_listener;
    ATXModeAppUsageManager *_modeAppUsageManager;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_donationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getAppUsageDataFromStartDate:(id)a0 reply:(id /* block */)a1;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logSuggestionShown:(id)a0 forType:(long long)a1 timestamp:(id)a2;
- (id)duetValueType;
- (id)init;
- (void)makeSuggestionForNextNotification;
- (void)submitGrading:(id)a0 rating:(id)a1 category:(id)a2 userId:(id)a3;
- (void).cxx_destruct;
- (void)logToCoreDuet:(id)a0 identifier:(id)a1 timestamp:(id)a2;
- (void)logNotificationWithMetadata:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)resetSuggestionResponses;
- (void)dealloc;
- (void)quietingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)promotingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)resetNotificationsHistory;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2 withReply:(id /* block */)a3;
- (id)getDuetMetadataFromNotification:(id)a0 metadata:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)logNotification:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logEventToCoreDuet:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2;
- (id)createMetadataForSuggestion:(id)a0 andType:(long long)a1;
- (id)getSuggestionResponses;
- (id)getLockscreenBundleIds;
- (void)logAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (void)logTapCoalesceForNotificationId:(id)a0 andBundleId:(id)a1 timestamp:(id)a2;
- (void)shouldMakeQuietingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 supplementaryAction:(id)a2 timestamp:(id)a3;
- (void)registerForAppChange;
- (void)logSuggestionDeduped:(id)a0 timestamp:(id)a1;
- (id)_createPortraitNotificationWithNotificationInterface:(id)a0;
- (id)getDuetStream;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)triggerReplay:(id /* block */)a0;
- (void)makeQuietingSuggestionForNextNotification;
- (void)_donateNotificationToPortraitWithNotificationsInterface:(id)a0;
- (void)logNotificationToCoreDuet:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)makePromotingSuggestionForNextNotification;
- (void)shouldMakePromotingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)_enableFocusModesIfPossible;

@end
