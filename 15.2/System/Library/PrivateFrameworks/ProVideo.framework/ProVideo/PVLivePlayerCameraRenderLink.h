@interface PVLivePlayerCameraRenderLink : PVLivePlayerRenderLink

- (id)initWithPlayerCameraSource:(id)a0;
- (void)cameraSourceRecievedFrameSet:(id)a0;
- (void)cameraSourceDroppedFrame;

@end
