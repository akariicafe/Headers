@class NSString;
@protocol HUCameraPlayerAVBehaviorDelegate;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing>

@property (weak, nonatomic) id<HUCameraPlayerAVBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (void)playbackControlsDidToggleMuted:(BOOL)a0;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)a0;
- (void)beginScrubbing;
- (void)endScrubbingWithTargetTime:(double)a0;
- (void)scrubToTime:(double)a0;

@end
