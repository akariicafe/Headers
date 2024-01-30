@class NSString, SBAlertItemsController, SBMainDisplayWorkspaceAppInteractionEventSource, NSDate;

@interface SBDeveloperBuildExpirationTrigger : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {
    SBAlertItemsController *_alertItemsController;
    SBMainDisplayWorkspaceAppInteractionEventSource *_eventSource;
    NSDate *_expirationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAlertItemsController:(id)a0 eventSource:(id)a1;
- (void)eventSource:(id)a0 didFinishTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)_coverSheetDidDismiss:(id)a0;
- (id)_initWithAlertItemsController:(id)a0 eventSource:(id)a1 expirationDate:(id)a2;
- (void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(BOOL)a0 toLauncher:(BOOL)a1;

@end
