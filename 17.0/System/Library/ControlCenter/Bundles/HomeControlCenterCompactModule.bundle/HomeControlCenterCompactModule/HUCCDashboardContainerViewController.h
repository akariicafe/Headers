@class _UIAsyncInvocation, NSDictionary, HUCCRemoteDashboardViewController;
@protocol HUCCDashboardContainerViewControllerDelegate;

@interface HUCCDashboardContainerViewController : UIViewController <HUCCRemoteDashboardDelegate>

@property (retain, nonatomic) HUCCRemoteDashboardViewController *remoteDashboardViewController;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (weak, nonatomic) id<HUCCDashboardContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *transitionSubviewFrames;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)serviceViewControllerProxy;
- (void)requestDismissal;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (void)willBeginTransition:(BOOL)a0 forCompactModule:(BOOL)a1;
- (void)_addNewRemoteViewController:(id)a0;
- (void)_configureAndAddRemoteViewController:(id)a0 forHome:(id)a1;
- (void)_requestRemoteViewControllerForHome:(id)a0;
- (void)_stopAndRemoveRemoteViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedContentFrame;
- (struct CGSize { double x0; double x1; })preferredExpandedSize;
- (void)remoteDashboard:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)requestLockAuthenticationForRemoteDashboard:(id)a0;
- (void)stopRemoteViewController;
- (void)willFinishTransition:(BOOL)a0 forCompactModule:(BOOL)a1;

@end
