@class UIViewController;
@protocol DCDocumentCameraViewServiceViewController, DCDocumentCameraPublicViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController>

@property (weak, nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<DCDocumentCameraViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (void)didCancel;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)didFinishWithDocumentInfoCollection:(id)a0;
- (void)viewControllerWasDismissed;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
