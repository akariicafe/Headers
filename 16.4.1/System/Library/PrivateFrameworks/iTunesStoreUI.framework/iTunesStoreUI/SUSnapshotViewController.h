@class UIImageView, UIViewController, UIActivityIndicatorView;

@interface SUSnapshotViewController : UIViewController

@property (nonatomic) long long originalOrientation;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIViewController *originalViewController;

- (long long)_currentOrientation;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (id)_snapshotOfView:(id)a0;
- (id)initWithOriginal:(id)a0;

@end
