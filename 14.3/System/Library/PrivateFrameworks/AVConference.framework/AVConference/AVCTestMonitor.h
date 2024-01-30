@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCTestMonitor : NSObject {
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
}

- (void)setEnableOneToOneMode:(BOOL)a0;
- (void)setEnableLoopbackInterface:(BOOL)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)setCannedReplayPath:(id)a0;
- (void)setForcedTargetBitrate:(int)a0;
- (void)setForcedCapBitrate:(int)a0;
- (void)setEmulatedRxPLR:(double)a0;
- (id)delegate;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)delegateNotificationQueue;
- (void)setupNotificationQueue:(id)a0;
- (void)requestReport;
- (void)updateAudioInjectConfig:(id)a0;
- (void)forceNetworkCellular:(BOOL)a0;
- (void)setEmulatedNetworkConfigurationPath:(id)a0;

@end
