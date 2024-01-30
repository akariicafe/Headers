@class NSString, NSExtension, _UIScreenRoutePickerViewController;
@protocol NSCopying, NSObject;

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost>

@property (weak, nonatomic) _UIScreenRoutePickerViewController *publicController;
@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying, NSObject> extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_dismissViewController;

@end
