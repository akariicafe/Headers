@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {
    UIViewController *_presenter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPresenter:(id)a0;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id /* block */)a0;
- (void)_mainQueue_verificationFailedAlert;
- (id)_disableAirplaneActionWithCompletionHandler:(id /* block */)a0;
- (id)_cancelActionWithCompletionHandler:(id /* block */)a0;
- (void)preflightNetworkStateWithCompletionHandler:(id /* block */)a0;

@end
