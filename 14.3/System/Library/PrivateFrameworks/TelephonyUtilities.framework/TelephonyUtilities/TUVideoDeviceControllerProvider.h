@class VideoAttributes, NSString, NSArray, TUVideoEffect, AVConferencePreview;
@protocol TUVideoDeviceControllerProviderDelegate;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider>

@property (readonly, nonatomic) AVConferencePreview *preview;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, nonatomic) NSArray *availableVideoEffects;

- (void)setLocalScreenAttributes:(id)a0;
- (void)beginPIPToPreviewAnimation;
- (id)init;
- (void).cxx_destruct;
- (void)setCameraZoomFactor:(double)a0;
- (void)pausePreview;
- (void)setLocalCameraWithUID:(id)a0;
- (id)localVideoLayer:(BOOL)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (id)thumbnailImageForVideoEffectName:(id)a0;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0;
- (void)startPreview;
- (void)beginPreviewToPIPAnimation;
- (void)endPIPToPreviewAnimation;
- (void)captureDevicesChanged:(id)a0;
- (void)stopPreview;
- (void)endPreviewToPIPAnimation;
- (id)localScreenAttributesForVideoAttributes:(id)a0;

@end
