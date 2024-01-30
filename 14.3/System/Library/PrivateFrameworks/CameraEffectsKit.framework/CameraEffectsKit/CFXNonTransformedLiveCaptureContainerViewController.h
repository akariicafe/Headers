@class CFXLiveCaptureViewController, UIView;

@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController

@property (retain, nonatomic) UIView *liveCaptureContainer;
@property (retain, nonatomic) UIView *liveCaptureContainerContainer;
@property (readonly, nonatomic) CFXLiveCaptureViewController *liveCaptureViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;

@end
