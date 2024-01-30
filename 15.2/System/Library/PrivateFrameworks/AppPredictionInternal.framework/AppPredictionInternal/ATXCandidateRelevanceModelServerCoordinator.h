@class NSArray, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;

- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)handleLOIExitNotification;
- (void)handleMicrolocationVisitNotification;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)start;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (void)registerForSupportedAnchorNotificatons;
- (void)_syncForTests;
- (id)currentDuetEventForAnchor:(id)a0;
- (id)supportedAnchorsForNotifications;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (id)init;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (void)dealloc;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)handleLOIEntranceNotification;
- (id /* block */)callbackForAnchor:(id)a0;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;

@end
