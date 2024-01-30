@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureDevice;

@interface RPPipViewController : UIViewController

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)startPipSession;
- (void)stopPipSession;
- (id)initWithOrientation:(long long)a0 position:(long long)a1;
- (id)cameraWithPosition:(long long)a0;
- (id)_pipView;
- (void)_updateViewGeometry;
- (void)setUpPipSession;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)a0;
- (void)_deviceOrientationDidChange;

@end
