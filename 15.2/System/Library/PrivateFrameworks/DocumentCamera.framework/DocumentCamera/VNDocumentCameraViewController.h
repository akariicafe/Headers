@class UIViewController;
@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id<VNDocumentCameraViewControllerDelegate> delegate;

+ (id)newDefaultViewController;
+ (id)newViewServiceViewController;
+ (id)newInProcessViewController;

- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithChildViewController:(id)a0;

@end
