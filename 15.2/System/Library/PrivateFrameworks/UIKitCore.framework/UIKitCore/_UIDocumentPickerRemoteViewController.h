@class NSString, UIViewController;
@protocol _UIDocumentPickerRemoteViewControllerContaining;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>

@property (weak, nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;
- (void)_dismissViewController;
- (void)_didSelectURLWrapper:(id)a0;
- (void)_didSelectURLBookmark:(id)a0;
- (void)_dismissWithOption:(id)a0;
- (void)_stitchFileCreationAtURL:(id)a0;
- (void)_tintColorDidChangeToColor:(id)a0;
- (void)_didSelectPicker;

@end
