@class NSString;
@protocol HUCameraPlayerAVBehaviorDelegate;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing>

@property (weak, nonatomic) id<HUCameraPlayerAVBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endScrubbingWithTargetTime:(double)a0;
- (void)scrubToTime:(double)a0;
- (void)beginScrubbing;
- (id)initWithDelegate:(id)a0;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (void)playbackControlsDidToggleMuted:(BOOL)a0;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)a0;

@end
