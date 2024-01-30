@class UIImageView;

@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) BOOL isiPad;
@property (readonly) long long deviceSize;
@property (retain) UIImageView *deviceWithScreenImageView;

- (void)viewDidLoad;
- (BOOL)_isRTL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
- (id)_deviceWithScreenImage;
- (id)_setupGenericImage;

@end
