@class AVCRemoteVideoClient;

@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient *remoteVideoClient;
}

- (id)initWithRemoteVideoClient:(id)a0;
- (void)layoutSublayers;

@end
