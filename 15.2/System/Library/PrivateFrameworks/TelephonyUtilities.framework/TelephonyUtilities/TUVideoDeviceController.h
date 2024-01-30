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
@property (readonly, nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (readonly, nonatomic) BOOL supportsCameraBlur;
@property (nonatomic) BOOL allowsCameraBlurToggling;
@property (nonatomic) BOOL cameraBlurEnabled;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } localScreenContentsRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localVideoPortraitAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localScreenPortraitAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localVideoLandscapeAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localScreenLandscapeAspectRatio;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, copy, nonatomic) NSArray *availableVideoEffects;

+ (void)prewarm;
+ (int)_tuOrientationForVideoOrientation:(int)a0;
+ (int)_videoOrientationForTUOrientation:(int)a0;

- (void)startPreview;
- (id)initWithSerialQueue:(id)a0;
- (void)setCinematicFramingEnabled:(BOOL)a0;
- (void)pausePreview;
- (void).cxx_destruct;
- (id)init;
- (void)setCameraZoomFactor:(double)a0;
- (void)stopPreview;
- (id)debugDescription;
- (id)initWithProvider:(id)a0 serialQueue:(id)a1;
- (void)getSnapshot;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (id)portraitScreenAttributes;
- (id)landscapeScreenAttributes;
- (void)didStartPreviewForProvider:(id)a0;
- (void)didPausePreviewForProvider:(id)a0;
- (void)didStopPreviewForProvider:(id)a0;
- (void)captureDevicesChangedForProvider:(id)a0;
- (void)provider:(id)a0 cameraDidBecomeAvailableForUniqueID:(id)a1;
- (void)provider:(id)a0 didChangeLocalVideoAttributes:(id)a1;
- (void)provider:(id)a0 didReceiveErrorFromCameraUniqueID:(id)a1 error:(id)a2;
- (void)provider:(id)a0 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a1;
- (void)provider:(id)a0 cameraZoomAvailabilityDidChange:(BOOL)a1;
- (void)provider:(id)a0 cameraBlurEnabledDidChange:(BOOL)a1;
- (void)provider:(id)a0 didGetSnapshot:(id)a1;
- (void)provider:(id)a0 cameraCinematicFramingAvailabilityDidChange:(BOOL)a1;
- (void)provider:(id)a0 cameraCinematicFramingEnabledDidChange:(BOOL)a1;
- (void)noteBeginAnimationToPreview;
- (void)flipCamera;
- (void)noteEndAnimationToPreview;
- (void)noteBeginAnimationToPIP;
- (void)noteEndAnimationToPIP;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0 localLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a1;

@end
