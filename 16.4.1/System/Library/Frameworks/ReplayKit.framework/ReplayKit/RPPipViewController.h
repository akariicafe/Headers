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

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUpPipSession;
- (void)startPipSession;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)a0;
- (void)_deviceOrientationDidChange;
- (id)_pipView;
- (void)_updateViewGeometry;
- (void)addSystemPreferredCameraObserver;
- (id)cameraWithPosition:(long long)a0;
- (void)configurePipSessionWithCameraPosition:(long long)a0;
- (id)initWithOrientation:(long long)a0 position:(long long)a1;
- (void)removeSystemPrefferedCameraObserver;
- (void)stopPipSession;

@end
