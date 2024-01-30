@interface PVLivePlayerCameraRenderLink : PVLivePlayerRenderLink

- (void)cameraSourceDroppedFrame;
- (void)cameraSourceRecievedFrameSet:(id)a0;
- (id)initWithPlayerCameraSource:(id)a0;

@end
