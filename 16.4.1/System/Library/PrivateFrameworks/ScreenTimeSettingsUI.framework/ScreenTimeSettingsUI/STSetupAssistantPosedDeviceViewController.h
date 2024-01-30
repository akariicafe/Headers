@class UIImageView;

@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) BOOL isiPad;
@property (readonly) long long deviceSize;
@property (retain) UIImageView *deviceWithScreenImageView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (BOOL)_isRTL;
- (void).cxx_destruct;
- (id)_deviceWithScreenImage;
- (id)_setupGenericImage;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;

@end
