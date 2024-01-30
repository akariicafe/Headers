@class AVCaptureSession, NSString, CMMotionManager, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TVLRGBColorDetectorDelegate;

@interface TVLRGBColorDetector : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSMutableArray *hueComponents;
@property (retain, nonatomic) NSMutableArray *saturationComponents;
@property (retain, nonatomic) NSMutableArray *brightnessComponents;
@property (retain, nonatomic) NSOperationQueue *accelerometerQueue;
@property (nonatomic) unsigned long long noMotionDuration;
@property (nonatomic) double hueThreshhold;
@property (nonatomic) double saturationThreshhold;
@property (nonatomic) double brightnessThreshhold;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionBufferQueue;
@property (nonatomic) int proximityNotificationToken;
@property (nonatomic) BOOL proximityState;
@property (nonatomic) int backlightNotificationToken;
@property (nonatomic) BOOL backlightState;
@property (nonatomic) BOOL useMotionDetection;
@property (nonatomic) double hueErrorMarginPercent;
@property (nonatomic) double saturationErrorMarginPercent;
@property (nonatomic) double brightnessErrorMarginPercent;
@property (nonatomic) unsigned long long rollingAverageForFrames;
@property (nonatomic) double pitchMargin;
@property (nonatomic) double yawMargin;
@property (nonatomic) double maximumMotion;
@property (weak, nonatomic) id<TVLRGBColorDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)_setupCaptureSession;
- (void)_prepareForDetection;
- (void)_stopDetection;
- (id)_averageColorForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_resetRollingAverage;
- (double)_pctChange:(double)a0 new:(double)a1 max:(double)a2;
- (void)_startDetection;
- (void)captureSessionRuntimeErrorDidOccur:(id)a0;
- (id)initWithThresholdsForHue:(double)a0 saturation:(double)a1 brightness:(double)a2;
- (void)beginDetection;
- (void)endDetection;

@end
