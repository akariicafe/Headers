@class UIImageView, UIViewController, UIActivityIndicatorView;

@interface SUSnapshotViewController : UIViewController

@property (nonatomic) long long originalOrientation;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIViewController *originalViewController;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (long long)_currentOrientation;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (id)_snapshotOfView:(id)a0;
- (id)initWithOriginal:(id)a0;

@end
