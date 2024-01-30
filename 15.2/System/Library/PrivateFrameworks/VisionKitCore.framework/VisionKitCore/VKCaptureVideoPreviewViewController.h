@class VKCaptureVideoPreviewView, NSString, NSDictionary, AVCaptureSession, AVCaptureDevice, NSObject, BKSAccelerometer, AVCaptureConnection;
@protocol OS_dispatch_queue;

@interface VKCaptureVideoPreviewViewController : UIViewController <BKSAccelerometerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@property (retain, nonatomic) BKSAccelerometer *accelerometer;
@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) struct CGSize { double width; double height; } dimensions;
@property (retain, nonatomic) AVCaptureConnection *connection;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *avCaptureQueue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (retain, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) long long videoOrientation;
@property (readonly, nonatomic) VKCaptureVideoPreviewView *previewView;
@property (readonly, nonatomic) BOOL wantsRegionOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)sessionRuntimeError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)dealloc;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)changeToZoomFactor:(double)a0;
- (struct CGPoint { double x0; double x1; })layerPointFromVisionPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didChangeRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)desiredDeviceTypes;
- (void)configureCamera;
- (void)updateDimensionsAndTransform;
- (void)startSessionIfReady;
- (struct CGPoint { double x0; double x1; })visionPointFromLayerPoint:(struct CGPoint { double x0; double x1; })a0;

@end
