@class VideoAttributes, NSString, AVConferenceXPCClient, NSDictionary, CALayer, NSObject;
@protocol OS_dispatch_queue;

@interface AVCRemoteVideoClient : NSObject {
    CALayer *_primaryCameraLayer;
    CALayer *_secondaryCameraLayer;
    CALayer *_screenLayer;
    CALayer *_primaryCameraSubLayer;
    CALayer *_secondaryCameraSubLayer;
    CALayer *_screenSubLayer;
    AVConferenceXPCClient *_connection;
    int _activeVideoMode;
    NSDictionary *_slotsForModes;
    NSObject<OS_dispatch_queue> *_avcRemoteVideoQueue;
}

@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (retain, nonatomic) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) BOOL hasReceivedFirstFrame;
@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) BOOL isMediaStalled;
@property (nonatomic) BOOL isVideoDegraded;
@property (nonatomic) BOOL isVideoSuspended;
@property (nonatomic) BOOL hasReceivedLastFrame;
@property (nonatomic) BOOL shouldDisplayVideoInfoLayer;
@property (copy, nonatomic) NSString *connectionTypeString;
@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) long long streamToken;

- (void)dealloc;
- (void)setVideoLayer:(id)a0 forMode:(int)a1;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)terminateConnection;
- (void)cleanupSubLayerForMode:(int)a0;
- (void)insertSubLayerInLayer:(id)a0 videoMode:(int)a1 videoSlot:(id)a2;
- (void)setActiveVideoLayerForMode:(int)a0;
- (void)insertInfoSubLayerIntoLayer:(id)a0 videoMode:(int)a1;
- (id *)subLayerRefForMode:(int)a0;
- (void)setActiveVideoModeFromRemoteVideoAttribute:(id)a0;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1;
- (id)subLayerForMode:(int)a0;
- (void)adjustInfoSubLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSuperLayer:(id)a1;
- (id)findInfoSubLayerFromLayer:(id)a0;
- (void)drawText:(id)a0 inSubLayer:(id)a1;
- (id)slotForMode:(int)a0;

@end
