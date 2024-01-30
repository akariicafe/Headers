@class PVTaskToken, JFXPerfTimer, NSDictionary, JFXCapturePreviewFrameStats, NSObject, PVFrameSet;
@protocol OS_dispatch_semaphore;

@interface JFXCapturePreviewProperties : NSObject

@property (readonly, nonatomic) PVFrameSet *cameraFrameSet;
@property (readonly, nonatomic) long long renderCameraMode;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } renderTime;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderOutputSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } frameSize;
@property (readonly, nonatomic) double displayTimestamp;
@property (readonly, nonatomic) BOOL renderRequiresCrop;
@property (readonly, nonatomic) PVTaskToken *signPostToken;
@property (readonly, nonatomic) JFXCapturePreviewFrameStats *frameStats;
@property (readonly, nonatomic) JFXPerfTimer *startFrameTimer;
@property (retain, nonatomic) NSDictionary *selfieBGBuffers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *selfieBGBufferLoadSem;

- (void).cxx_destruct;
- (id)initWithCameraFrameSet:(id)a0 renderCameraMode:(long long)a1 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 renderOutputSize:(struct CGSize { double x0; double x1; })a3 frameSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithCameraFrameSet:(id)a0 renderCameraMode:(long long)a1 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 renderOutputSize:(struct CGSize { double x0; double x1; })a3 frameSize:(struct CGSize { double x0; double x1; })a4 signPostToken:(id)a5 displayTimestamp:(double)a6 frameStats:(id)a7 startFrameTimer:(id)a8;

@end
