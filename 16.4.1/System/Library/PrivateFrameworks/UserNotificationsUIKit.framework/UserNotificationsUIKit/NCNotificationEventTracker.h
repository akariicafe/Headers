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

- (void)realTimeTuningTrigger:(long long)a0;
- (id)_longLookCustomActionTracker;
- (id)_longLookDefaultActionTracker;
- (void)dismissedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)shortLookClearedForNotificationRequest:(id)a0 withState:(id)a1;
- (id)notificationDestinationForState:(id)a0;
- (void)shortLookDismissInvokedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)longLookDismissInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)receivedNotification:(id)a0 withProminence:(BOOL)a1 sectionSettings:(id)a2;
- (void)modifiedNotificationRequest:(id)a0;
- (id)_primaryAttachmentTypeProperty;
- (void)insertedNotificationRequest:(id)a0 toSectionType:(unsigned long long)a1;
- (void)notificationCenterClearAll;
- (id)_textInputProperty;
- (void)executedActionWithIdentifier:(id)a0 forNotificationRequest:(id)a1;
- (void)missedBundleExpanded:(id)a0;
- (id)_longLookReparkTracker;
- (id)_customActionsCountProperty;
- (void)longLookCustomAction:(id)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_notificationCenterClearAllTracker;
- (id)_notificationCenterClearDayTracker;
- (id)_destinationProperty;
- (void)presentedNotificationRequestAsBanner:(id)a0;
- (void)longLookPresentedForNotificationRequest:(id)a0;
- (id)_attachmentCountProperty;
- (id)_longLookDismissTracker;
- (id)_shortLookDefaultActionTracker;
- (void)missedBundleExpired:(id)a0;
- (void)digestDismissed:(id)a0;
- (void)longLookReparkInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_triggerPropertyForEvent:(id)a0;
- (void)removedNotificationRequest:(id)a0;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)a0;
- (id)_longLookPresentationTracker;
- (void)expandedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (id)init;
- (id)_customExtensionProperty;
- (void)toggledGroupState:(BOOL)a0 withLeadingNotificationRequest:(id)a1;
- (id)_shortLookClearTracker;
- (id)_firstPartyAppProperty;
- (id)_shortLookDismissTracker;
- (void)missedBundleAppeared:(id)a0;
- (void)digestExpired:(id)a0;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)_displayedNotificationRequests:(id)a0 inUILocation:(long long)a1;
- (void)realTimeTuningOutcome:(long long)a0 withBundleId:(id)a1;
- (void)missedBundleDismissed:(id)a0;
- (void)notificationCenterAppeared;
- (void)digestAppeared:(id)a0;
- (void).cxx_destruct;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)notificationCenterDisappeared;
- (void)hideNotificationRequest:(id)a0;
- (void)digestExpanded:(id)a0;

@end
