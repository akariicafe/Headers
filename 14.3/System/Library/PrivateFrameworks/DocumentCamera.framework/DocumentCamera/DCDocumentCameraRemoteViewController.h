@class UIViewController;
@protocol DCDocumentCameraViewServiceViewController, DCDocumentCameraPublicViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController>

@property (weak, nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<DCDocumentCameraViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)didCancel:(id)a0;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerWasDismissed;
- (void)didFinishWithDocumentInfoCollection:(id)a0;

@end
