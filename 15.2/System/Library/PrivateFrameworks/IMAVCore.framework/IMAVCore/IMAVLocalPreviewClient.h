@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {
    BOOL _shouldAlterPreviewState;
    BOOL _wantsPreview;
    BOOL _wantsPausedPreview;
    BOOL _wantsUnpausedPreview;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } localPortraitAspectRatio;

@property (retain, nonatomic) AVConferencePreview *conferencePreview;
@property (readonly, nonatomic) BOOL isPreviewRunning;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) void *localVideoBackLayer;

+ (id)sharedInstance;

- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemScreenDidPowerUp;
- (void)systemScreenDidPowerDown;
- (void)startPreview;
- (void)setLocalScreenAttributes:(id)a0;
- (void)pausePreview;
- (void).cxx_destruct;
- (id)init;
- (void)stopPreview;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)dealloc;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)avChat:(id)a0 setLocalPortraitRatio:(struct CGSize { double x0; double x1; })a1 localLandscapeRatio:(struct CGSize { double x0; double x1; })a2;
- (void)_avDaemonConnected;
- (BOOL)_shouldPreviewBeRunning;
- (void)_updatePreviewState;
- (void)updateLocalScreenAtrributes;
- (void)unpausePreview;
- (void)beginAnimationToPIP;
- (void)endAnimationToPIP;
- (void)beginAnimationToPreview;
- (void)endAnimationToPreview;

@end
