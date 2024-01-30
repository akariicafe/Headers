@class UIViewController;
@protocol DCDocumentCameraViewServiceViewController, DCDocumentCameraPublicViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController>

@property (weak, nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<DCDocumentCameraViewServiceViewController> viewServiceViewController;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)didCancel:(id)a0;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerWasDismissed;
- (void)didFinishWithDocumentInfoCollection:(id)a0;

@end
