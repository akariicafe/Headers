@class UIActivityIndicatorView, NSProgress, UILabel, ICCircularProgressView;
@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) ICCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (weak, nonatomic) id<ICProgressViewControllerDelegate> progressDelegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
