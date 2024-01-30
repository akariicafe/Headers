@class UNUserNotificationCenter, NSString, WFSuggestionsWorkflowRunnerClient, WFLWorkflowController, PETScalarEventTracker;
@protocol ATXTVIntentHandler;

@interface ATXActionNotificationServer : NSObject <WFLWorkflowControllerDelegate, WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_notificationCenter;
    WFLWorkflowController *_currentWorkflowController;
    WFSuggestionsWorkflowRunnerClient *_currentWorkflowRunnerClient;
    id<ATXTVIntentHandler> _tvIntentHandler;
    PETScalarEventTracker *_removeTracker;
    PETScalarEventTracker *_notifyInitTracker;
    PETScalarEventTracker *_notifyErrorTracker;
    PETScalarEventTracker *_notifySuccessTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)bundleIdFromRequestIdentifier:(id)a0;
+ (id)localizedContentBodyStringWithString:(id)a0 forAction:(id)a1;
+ (id)_requestIdentifierForBundleId:(id)a0;

- (void)_setupNotifications;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (BOOL)_isRTL;
- (id)init;
- (id)_unarchiveActionResponseFromNotification:(id)a0;
- (id)workflowController:(id)a0 userInterfaceForRunningAction:(id)a1;
- (void).cxx_destruct;
- (void)workflowControllerWillRun:(id)a0;
- (void)_removeNotificationWithIdentifier:(id)a0 trackEvent:(BOOL)a1;
- (BOOL)hasLockscreenPrediction;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (void)removeActionPredictionNotificationsMatchingAction:(id)a0;
- (id)_unarchiveActionFromNotification:(id)a0;
- (void)_postNotificationForATXAction:(id)a0 actionResponse:(id)a1;
- (void)workflowControllerDidStop:(id)a0 withError:(id)a1;
- (unsigned long long)deliveredNotificationCount;
- (void)postNotificationForATXActionResponse:(id)a0;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (void)_postTestNotificationWithPredictionCount:(long long)a0;
- (id)_actionKeyFromNotification:(id)a0;
- (void)_handleNonBackgroundIntent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_postTestNotification;
- (void)postNotificationForATXAction:(id)a0 actionResponse:(id)a1;
- (void)workflowControllerDidFinishRunning:(id)a0 withOutput:(id)a1;
- (id)_localizedStringForKey:(id)a0 defaultValue:(id)a1 languageCode:(id)a2;
- (void)removeAllActionPredictionNotificationsAndTrackEvent:(BOOL)a0 recordFeedback:(BOOL)a1;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
