@class _UIResilientRemoteViewContainerViewController, REMReminderCreationRemoteViewController, NSError;
@protocol REMReminderCreationViewServiceViewController, REMReminderCreationDelegate;

@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController>

@property (retain, nonatomic, setter=setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<REMReminderCreationViewServiceViewController> viewServiceViewController;
@property (readonly, nonatomic, getter=remoteViewController) REMReminderCreationRemoteViewController *remoteViewController;
@property (readonly, nonatomic) id<REMReminderCreationDelegate> delegate;
@property (copy, nonatomic) NSError *deferredErrorDuringPresentation;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFinish;

@end
