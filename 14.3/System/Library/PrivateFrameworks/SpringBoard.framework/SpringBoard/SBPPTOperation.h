@interface SBPPTOperation : NSOperation

+ (id)operationToUnlockInterfaceFinishingUIUnlock:(BOOL)a0;
+ (id)operationToSynthesizeEventsForEventActions:(id /* block */)a0;
+ (void)enqueueOperations:(id)a0;
+ (id)operationToUnlockInterface;
+ (id)operationToLockInterface;
+ (id)operationToSetInterfaceOrientation:(long long)a0;
+ (id)operationToWaitForTimeInterval:(double)a0;
+ (id)operationToWaitForNotificationName:(id)a0 object:(id)a1 timeout:(double)a2;
+ (id)operationToTransitionToHomeScreen;
+ (id)operationToSaveHomeScreenState;
+ (id)operationToRestoreHomeScreenState;
+ (id)operationToPresentAppSwitcher;
+ (id)operationToDismissAppSwitcher;
+ (id)operationToSaveAppSwitcherState;
+ (id)operationToRestoreAppSwitcherState;
+ (id)operationToLoadPPTAppSwitcherState;
+ (id)operationToPresentCoverSheet;
+ (id)operationToDismissCoverSheet;
+ (id)operationToPresentFloatingDock;
+ (id)operationToDismissFloatingDock;
+ (id)operationToPresentBannerNotification;
+ (id)operationToDismissBannerNotification;
+ (id)operationToActivateApplicationWithBundleIdentifier:(id)a0;
+ (id)operationToTerminateApplicationWithBundleIdentifier:(id)a0;
+ (id)operationToSynthesizeEventsForCommandString:(id)a0;
+ (id)operationToSynthesizeEventsForEventStream:(id)a0;
+ (id)operationToSwipeUpInMiddleOfInterface;
+ (id)operationToSwipeDownInMiddleOfInterface;
+ (id)operationToSwipeLeftInMiddleOfInterface;
+ (id)operationToSwipeRightInMiddleOfInterface;

@end
