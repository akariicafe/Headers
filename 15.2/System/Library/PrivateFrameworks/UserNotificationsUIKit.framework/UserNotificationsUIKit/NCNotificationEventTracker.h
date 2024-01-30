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

- (void)digestExpired:(id)a0;
- (id)_customActionsCountProperty;
- (void)longLookDismissInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)notificationCenterClearAll;
- (void)toggledGroupState:(BOOL)a0 withLeadingNotificationRequest:(id)a1;
- (id)_shortLookDismissTracker;
- (void)executedActionWithIdentifier:(id)a0 forNotificationRequest:(id)a1;
- (void)shortLookDismissInvokedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)missedBundleDismissed:(id)a0;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_notificationCenterClearAllTracker;
- (void)longLookCustomAction:(id)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)receivedNotification:(id)a0 withProminence:(BOOL)a1 sectionSettings:(id)a2;
- (void)hideNotificationRequest:(id)a0;
- (id)_shortLookDefaultActionTracker;
- (void)digestExpanded:(id)a0;
- (id)_customExtensionProperty;
- (id)_primaryAttachmentTypeProperty;
- (void)_displayedNotificationRequests:(id)a0 inUILocation:(long long)a1;
- (id)notificationDestinationForState:(id)a0;
- (id)_textInputProperty;
- (void)notificationCenterAppeared;
- (id)_destinationProperty;
- (id)_firstPartyAppProperty;
- (void)removedNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (void)digestAppeared:(id)a0;
- (void)missedBundleExpanded:(id)a0;
- (id)init;
- (id)_longLookCustomActionTracker;
- (void)realTimeTuningTrigger:(long long)a0;
- (id)_triggerPropertyForEvent:(id)a0;
- (void)insertedNotificationRequest:(id)a0 toSectionType:(unsigned long long)a1;
- (void)missedBundleAppeared:(id)a0;
- (void)longLookReparkInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)expandedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)notificationCenterDisappeared;
- (id)_attachmentCountProperty;
- (id)_shortLookClearTracker;
- (void)longLookPresentedForNotificationRequest:(id)a0;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)a0;
- (void)digestDismissed:(id)a0;
- (id)_longLookDefaultActionTracker;
- (id)_longLookReparkTracker;
- (void)presentedNotificationRequestAsBanner:(id)a0;
- (void)realTimeTuningOutcome:(long long)a0 withBundleId:(id)a1;
- (void)dismissedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_longLookPresentationTracker;
- (void)missedBundleExpired:(id)a0;
- (id)_notificationCenterClearDayTracker;
- (void)shortLookClearedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)modifiedNotificationRequest:(id)a0;
- (id)_longLookDismissTracker;

@end
