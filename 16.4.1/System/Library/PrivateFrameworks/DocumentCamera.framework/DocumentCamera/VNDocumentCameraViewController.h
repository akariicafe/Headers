@class UIViewController;
@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id<VNDocumentCameraViewControllerDelegate> delegate;

+ (id)newDefaultViewController;
+ (id)newInProcessViewController;
+ (id)newViewServiceViewController;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChildViewController:(id)a0;

@end
