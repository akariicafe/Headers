@class NSArray, TUVideoEffect, CALayer, AVCaptureDevice, NSObject;
@protocol OS_dispatch_queue, TUVideoDeviceControllerProvider, TUVideoEffectsProvider;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) id<TUVideoDeviceControllerProvider, TUVideoEffectsProvider> provider;
@property (nonatomic) BOOL wantsPreview;
@property (nonatomic) BOOL hasRefreshedPreviewAfterError;
@property (retain, nonatomic) AVCaptureDevice *currentInputDevice;
@property (nonatomic) int currentVideoOrientation;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } localScreenContentsRect;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, copy, nonatomic) NSArray *availableVideoEffects;

+ (int)_tuOrientationForVideoOrientation:(int)a0;
+ (int)_videoOrientationForTUOrientation:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setCameraZoomFactor:(double)a0;
- (id)initWithSerialQueue:(id)a0;
- (void)pausePreview;
- (void)flipCamera;
- (id)initWithProvider:(id)a0 serialQueue:(id)a1;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)didStartPreviewForProvider:(id)a0;
- (void)didPausePreviewForProvider:(id)a0;
- (void)didStopPreviewForProvider:(id)a0;
- (void)captureDevicesChangedForProvider:(id)a0;
- (void)provider:(id)a0 cameraDidBecomeAvailableForUniqueID:(id)a1;
- (void)provider:(id)a0 didChangeLocalVideoAttributes:(id)a1;
- (void)provider:(id)a0 didReceiveErrorFromCameraUniqueID:(id)a1 error:(id)a2;
- (void)provider:(id)a0 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a1;
- (void)provider:(id)a0 cameraZoomAvailabilityDidChange:(BOOL)a1;
- (void)noteBeginAnimationToPreview;
- (void)noteEndAnimationToPreview;
- (void)noteBeginAnimationToPIP;
- (void)noteEndAnimationToPIP;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0 localLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a1;
- (void)startPreview;
- (id)debugDescription;
- (void)stopPreview;

@end
