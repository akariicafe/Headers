@class SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject {
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayPolicyAggregator *_policyAggregator;
}

- (void).cxx_destruct;
- (id)init;
- (void)launchTodayViewFromCurrentContextWithCompletion:(id /* block */)a0;
- (void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(id /* block */)a0;

@end
