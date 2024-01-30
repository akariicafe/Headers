@class UIWindow, ICProgressViewController, NSProgress, NSString, NSDate, UIViewController;

@interface ICLongRunningTaskController : NSObject <ICProgressViewControllerDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (retain, nonatomic) id keepAlive;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ updateProgressUIBlock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate;
@property (retain, nonatomic) NSDate *openProgressDate;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) ICProgressViewController *progressViewController;
@property (nonatomic) BOOL progressViewControllerDidFinishPresenting;
@property (nonatomic) BOOL shouldDismissProgressViewController;
@property (nonatomic) BOOL shouldShowCancelButton;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (copy, nonatomic) NSString *customCancelButtonTitle;
@property (copy, nonatomic) NSString *progressFormatString;
@property (retain, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (nonatomic) BOOL shouldShowCircularProgress;
@property (nonatomic) BOOL allowSingleUnitProgress;

+ (void)setMainWindow:(id)a0;

- (void)updateProgress;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithWindow:(id)a0 intervalBeforeOpeningProgressDialog:(double)a1;
- (void)startTask:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)completeTaskIfNecessary;
- (void)openProgressDialog;
- (void)closeProgressDialog;
- (void)willDismissProgressViewController:(id)a0;

@end
