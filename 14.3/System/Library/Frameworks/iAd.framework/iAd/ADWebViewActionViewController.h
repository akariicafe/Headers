@class ADHomeButtonHandler;
@protocol ADWebViewActionViewControllerDelegate;

@interface ADWebViewActionViewController : SFSafariViewController

@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) id<ADWebViewActionViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissViewForHomeButton;

@end
