@class UIWindow, NSProgress, DCProgressViewController, NSDate, UIViewController;

@interface DCLongRunningTaskController : NSObject <DCProgressViewControllerDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (retain, nonatomic) id keepAlive;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ updateProgressUIBlock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate;
@property (retain, nonatomic) NSDate *openProgressDate;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) DCProgressViewController *progressViewController;
@property (nonatomic) BOOL progressViewControllerDidFinishPresenting;
@property (nonatomic) BOOL shouldDismissProgressViewController;
@property (nonatomic) BOOL shouldShowCancelButton;
@property (copy, nonatomic) id /* block */ progressToStringTransformer;
@property (retain, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (nonatomic) BOOL shouldShowCircularProgress;

+ (void)setMainWindow:(id)a0;

- (void)updateProgress;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)closeProgressDialog;
- (void)completeTaskIfNecessary;
- (id)initWithWindow:(id)a0 intervalBeforeOpeningProgressDialog:(double)a1;
- (void)openProgressDialog;
- (void)startTask:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)willDismissProgressViewController:(id)a0;

@end
