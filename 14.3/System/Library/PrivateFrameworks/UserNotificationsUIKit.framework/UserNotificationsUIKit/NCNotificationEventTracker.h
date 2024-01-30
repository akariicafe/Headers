@class PETScalarEventTracker, ATXNotificationsLoggingClient;

@interface NCNotificationEventTracker : NSObject {
    PETScalarEventTracker *_shortLookDefaultActionTracker;
    PETScalarEventTracker *_shortLookDismissTracker;
    PETScalarEventTracker *_shortLookClearTracker;
    PETScalarEventTracker *_notificationCenterClearDayTracker;
    PETScalarEventTracker *_notificationCenterClearAllTracker;
    PETScalarEventTracker *_longLookPresentationTracker;
    PETScalarEventTracker *_longLookDefaultActionTracker;
    PETScalarEventTracker *_longLookCustomActionTracker;
    PETScalarEventTracker *_longLookDismissTracker;
    PETScalarEventTracker *_longLookReparkTracker;
    ATXNotificationsLoggingClient *_logger;
}

+ (id)sharedInstance;
+ (id)createATXNotificationInterfaceFromRequest:(id)a0;
+ (unsigned long long)convertBBObserverFeedToATXNotificationsFeed:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)longLookCustomAction:(id)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)defaultActionForNotification:(id)a0;
- (void)dismissActionForNotification:(id)a0;
- (void)silenceActionForNotification:(id)a0;
- (id)_destinationProperty;
- (id)_triggerPropertyForEvent:(id)a0;
- (id)_firstPartyAppProperty;
- (id)_attachmentCountProperty;
- (id)_primaryAttachmentTypeProperty;
- (id)_customExtensionProperty;
- (id)_customActionsCountProperty;
- (id)_textInputProperty;
- (id)_shortLookDefaultActionTracker;
- (id)notificationDestinationForState:(id)a0;
- (id)_shortLookDismissTracker;
- (id)_shortLookClearTracker;
- (id)_notificationCenterClearDayTracker;
- (id)_notificationCenterClearAllTracker;
- (id)_longLookDefaultActionTracker;
- (id)_longLookCustomActionTracker;
- (id)_longLookDismissTracker;
- (id)_longLookReparkTracker;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)a0;
- (id)_longLookPresentationTracker;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)shortLookDismissInvokedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)shortLookClearedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)notificationCenterDayCleared;
- (void)notificationCenterClearAll;
- (void)longLookDidPresentForNotificationRequest:(id)a0;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)longLookDismissInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)longLookReparkInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)pulldownActionForNotification:(id)a0;
- (void)receivedNotification:(id)a0 forFeed:(unsigned long long)a1;
- (void)removedNotificationFromLockScreen:(id)a0;
- (void)removedNotificationFromAllFeeds:(id)a0;
- (void)tappedCoalescedNotification:(id)a0 inBundle:(id)a1;
- (void)realTimeTuningOutcome:(long long)a0 withBundleId:(id)a1;
- (void)realTimeTuningTrigger:(long long)a0;

@end
