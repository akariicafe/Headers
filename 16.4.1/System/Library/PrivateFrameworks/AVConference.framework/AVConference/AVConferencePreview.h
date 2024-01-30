@class AVConferenceXPCClient, VideoAttributes, NSString, CALayer, NSObject;
@protocol OS_dispatch_queue, AVConferencePreviewClientDelegate;

@interface AVConferencePreview : NSObject {
    AVConferenceXPCClient *connection;
    BOOL clientWantsPreview;
    unsigned int connectionAttempts;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    struct CGSize { double width; double height; } localScreenPortraitAspectRatio;
    struct CGSize { double width; double height; } localScreenLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
    BOOL _isPreviewRunning;
    BOOL _zoomAvailable;
    BOOL _CFAvailable;
    double _currentZoomFactor;
    double _maxZoomFactor;
    NSString *_localCameraUID;
}

@property (retain, nonatomic) NSObject<AVConferencePreviewClientDelegate> *delegate;

+ (id)AVConferencePreviewSingleton;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)setCinematicFramingEnabled:(BOOL)a0;
- (id)retain;
- (double)maxZoomFactor;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didStartPreview;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (void)setCameraZoomFactor:(double)a0;
- (unsigned long long)retainCount;
- (void)startPreview;
- (void)stopPreview;
- (void)didPausePreview;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)didGetSnapshot:(id)a0;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)a0 reason:(long long)a1;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0 currentZoomFactor:(double)a1 maxZoomFactor:(double)a2;
- (void)didChangeLocalCameraUID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (BOOL)isPreviewRunning;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (id)localVideoAttributes;
- (id)localVideoLayer:(BOOL)a0;
- (void)pausePreview;
- (void)setAnimoji:(id)a0;
- (void)setCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)setFollowSystemCameraEnabled:(BOOL)a0;
- (void)setLocalCameraWithUID:(id)a0;
- (void)setLocalScreenAttributes:(id)a0;
- (void)setLocalVideoAttributes:(id)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (void)setLocalCamera:(unsigned int)a0;
- (void)addStickerWithURL:(id)a0 isFaceSticker:(BOOL)a1 atPosition:(struct CGPoint { double x0; double x1; })a2 identifier:(id)a3;
- (void)cameraCFramingAvailabilityDidChange:(BOOL)a0;
- (void)clearAllStickers:(BOOL)a0;
- (void)connectLayer:(id)a0 withSlot:(unsigned int)a1;
- (double)currentZoomFactor;
- (BOOL)isCameraZoomAvailable;
- (unsigned int)localCamera;
- (void)registerBlocksForDelegateNotifications;
- (void)resetLocalCameraAfterServerDisconnect;
- (void)setMemoji:(id)a0;
- (void)startPreviewUnpausing:(BOOL)a0;

@end
