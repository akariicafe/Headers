@class PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_unlockTracker;
    PETDistributionEventTracker *_sessionTimeTracker;
    double _screenOnTimestamp;
    struct { BOOL usedQuickActionButton; BOOL scrolledInNotifications; BOOL longLookedNotification; BOOL interactedNotifcation; BOOL clearedNotifcations; BOOL activatedCamera; BOOL prewarmedCameraFalsePositive; BOOL cameraSwipeFailed; BOOL activatedControlCenter; BOOL activatedSpotlight; BOOL unlockDismissed; } _sessionInteractions;
    BOOL _shouldReport;
}

- (BOOL)_determineIfShouldReport;
- (id)init;
- (void).cxx_destruct;
- (void)_trackUnlockConversion:(BOOL)a0;
- (void)_trackUnlockOpportunity;
- (void)_trackSessionWithDuration:(double)a0;

@end
