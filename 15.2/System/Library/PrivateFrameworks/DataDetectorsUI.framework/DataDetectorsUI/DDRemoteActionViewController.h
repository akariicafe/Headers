@class NSString, _UIRemoteViewController, DDAction, DDActionController;

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter, _UIRemoteViewControllerContaining> {
    BOOL _proxyConfigured;
    BOOL _waitingForRemoteConfiguration;
    BOOL _receivedActionDidFinish;
}

@property (weak, nonatomic) DDAction *action;
@property (weak, nonatomic) DDActionController *actionController;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)prepareViewController:(id)a0 forAction:(id)a1 actionController:(id)a2;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)getIsBeingPresentedInPopover:(id /* block */)a0;
- (void)actionDidFinishShouldDismiss:(BOOL)a0;
- (void)viewControllerReady;
- (void)actionCanBeCancelledExternally:(BOOL)a0;
- (void)_prepareForAction:(id)a0 inActionController:(id)a1;

@end
