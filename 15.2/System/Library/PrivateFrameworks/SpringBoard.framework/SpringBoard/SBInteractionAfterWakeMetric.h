@class PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_unlockTracker;
    PETDistributionEventTracker *_sessionTimeTracker;
    double _screenOnTimestamp;
    struct { BOOL usedQuickActionButton; BOOL scrolledInNotifications; BOOL longLookedNotification; BOOL interactedNotifcation; BOOL clearedNotifcations; BOOL activatedCamera; BOOL prewarmedCameraFalsePositive; BOOL cameraSwipeFailed; BOOL activatedControlCenter; BOOL activatedSpotlight; BOOL unlockDismissed; } _sessionInteractions;
    BOOL _shouldReport;
}

- (void)_trackUnlockOpportunity;
- (BOOL)_determineIfShouldReport;
- (void)_trackSessionWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_trackUnlockConversion:(BOOL)a0;

@end
