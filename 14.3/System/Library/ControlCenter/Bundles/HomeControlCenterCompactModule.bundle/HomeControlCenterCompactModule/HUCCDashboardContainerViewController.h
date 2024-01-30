@class _UIAsyncInvocation, NSDictionary, HUCCRemoteDashboardViewController;
@protocol HUCCDashboardContainerViewControllerDelegate;

@interface HUCCDashboardContainerViewController : UIViewController <HUCCRemoteDashboardDelegate>

@property (retain, nonatomic) HUCCRemoteDashboardViewController *remoteDashboardViewController;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (weak, nonatomic) id<HUCCDashboardContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *transitionSubviewFrames;

- (void).cxx_destruct;
- (void)loadView;
- (id)serviceViewControllerProxy;
- (id)initWithDelegate:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (void)willBeginTransition:(BOOL)a0 forCompactModule:(BOOL)a1;
- (void)willFinishTransition:(BOOL)a0 forCompactModule:(BOOL)a1;
- (void)stopRemoteViewController;
- (struct CGSize { double x0; double x1; })preferredExpandedSize;
- (void)remoteDashboard:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedContentFrame;
- (void)_requestRemoteViewControllerForHome:(id)a0;
- (void)_stopAndRemoveRemoteViewController;
- (void)_configureAndAddRemoteViewController:(id)a0 forHome:(id)a1;
- (void)_addNewRemoteViewController:(id)a0;
- (void)requestLockAuthenticationForRemoteDashboard:(id)a0;

@end
