@class NSString;
@protocol _UIColorPickerRemoteViewControllerHost;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost>

@property (weak, nonatomic) id<_UIColorPickerRemoteViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void).cxx_destruct;
- (void)_pickerDidShowEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_colorPickerDidFinish;
- (void)_pickerDidDismissEyedropper;

@end
