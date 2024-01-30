@interface CNKFaceTimeCameraViewController : CFXCameraViewController

@property (nonatomic, weak) void /* unknown type, empty encoding */ cameraDelegate;

- (void).cxx_destruct;
- (void)effectBrowserViewController:(id)a0 didSelectAppWithIdentifier:(id)a1;
- (void)effectBrowserViewController:(id)a0 didSelectEffect:(id)a1;
- (id)initWithCaptureMode:(long long)a0 devicePosition:(long long)a1 flashMode:(long long)a2 aspectRatioCrop:(long long)a3;

@end
