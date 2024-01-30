@class HFCameraPlaybackEngine, HUCameraMicrophoneControl, HUCameraView, NSString;

@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver>

@property (retain, nonatomic) HUCameraView *cameraView;
@property (retain, nonatomic) HUCameraMicrophoneControl *microphoneControl;
@property (readonly, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateLiveCameraSource:(id)a1;
- (void)_updateCameraCornerRadius;

@end
