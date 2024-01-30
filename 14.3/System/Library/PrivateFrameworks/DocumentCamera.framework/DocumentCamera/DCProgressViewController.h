@class DCCircularProgressView, UIActivityIndicatorView, NSProgress, UILabel;
@protocol DCProgressViewControllerDelegate;

@interface DCProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) DCCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (weak, nonatomic) id<DCProgressViewControllerDelegate> progressDelegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
