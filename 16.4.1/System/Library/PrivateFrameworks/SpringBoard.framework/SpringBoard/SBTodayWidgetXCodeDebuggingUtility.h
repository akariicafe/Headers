@class SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject {
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayPolicyAggregator *_policyAggregator;
}

- (id)init;
- (void).cxx_destruct;
- (void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(id /* block */)a0;
- (void)launchTodayViewFromCurrentContextWithCompletion:(id /* block */)a0;

@end
