@class _PXAlertContentViewController, UIProgressView, UIActivityIndicatorView, UIView;

@interface PXAlertController : UIAlertController {
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
}

@property (retain, nonatomic) UIView *contentView;

+ (id)activityAlertControllerWithTitle:(id)a0 cancelHandler:(id /* block */)a1;
+ (id)progressAlertControllerWithMessage:(id)a0;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setProgress:(float)a0 animated:(BOOL)a1;

@end
