@class NSString, VCMediaStreamSynchronizer;
@protocol VCMediaStreamSyncSource, VCVideoReceiverDelegate;

@interface VCVideoReceiverBase : NSObject <VCMediaStreamSyncDestination, VCConnectionChangedHandler> {
    float lastLastVideoStallDuration;
    unsigned int _rtpTimestampRate;
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
}

@property int remoteVideoOrientation;
@property (nonatomic) id<VCVideoReceiverDelegate> delegate;
@property (nonatomic) id<VCMediaStreamSyncSource> syncSource;
@property double roundTripTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) float lastLastVideoStallDuration;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pauseVideo;
- (void)setSynchronizer:(id)a0;
- (void)setTargetStreamID:(unsigned short)a0;
- (void)startVideo;
- (void)stopVideo;
- (void)handleActiveConnectionChange:(id)a0;
- (BOOL)startSynchronization:(id)a0;
- (void)stopSynchronization;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setEnableCVO:(BOOL)a0 cvoExtensionID:(unsigned long long)a1;
- (void)updateSourcePlayoutTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (void)rtcpSendIntervalElapsed;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; } *)a0 interval:(float)a1;

@end
