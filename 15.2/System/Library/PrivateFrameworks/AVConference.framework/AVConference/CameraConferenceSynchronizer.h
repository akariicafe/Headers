@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {
    BOOL isConference720p;
    BOOL isConferenceOniPad;
    BOOL receivedRequestToChangeCamera;
    BOOL receivedFirstRemoteFrame;
    int cameraHasChangedToCapture;
    int didSendFirstRemoteFrameNotification;
    VCVideoRule *captureRule;
    id /* block */ remoteFrameNotificationBlock;
    id /* block */ didStopNotificationBlock;
}

@property (nonatomic, setter=setLocalPortraitAspectRatio:) struct CGSize { double width; double height; } localPortraitAspectRatio;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)scheduleFirstRemoteFrameNotification:(id /* block */)a0;
- (void)scheduleCameraChangeToCaptureSettings:(id)a0;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)cameraSizeChangedTo:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldConferenceSendFirstRemoteFrameNotification;
- (void)notifyClientOfRemoteFrame:(double)a0;
- (BOOL)shouldConferenceChangeCameraToCaptureSettings;
- (void)changeCameraToCaptureSettings:(double)a0 forced:(BOOL)a1;
- (BOOL)shouldConferenceChangeCameraToPreviewSettings;

@end
