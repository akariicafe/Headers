@class NSString, NSMutableDictionary;

@interface MultiwayCall : NSObject {
    int _interval;
    int _frequency;
    unsigned long long _downlinkRateSum;
    unsigned int _downlinkRateUpdateCounter;
    unsigned long long _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned int _averageReceiveFramerate;
    BOOL _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    double _videoDegradedTotalTime;
    double _videoDegradedStartTime;
    double _handshakeStartTime;
    double _handshakeDuration;
}

@property (readonly) NSString *remoteParticipantID;
@property (readonly, getter=isLive) BOOL live;
@property BOOL isAudioEnabled;
@property BOOL isVideoEnabled;
@property BOOL isScreenEnabled;
@property BOOL isExpanseEnabled;
@property BOOL isFullSize;
@property BOOL hasWebParticipant;
@property int duration;
@property int adjustedDuration;
@property (readonly) NSMutableDictionary *streamGroups;
@property unsigned int downlinkTargetBitrateSwitchCount;
@property unsigned int timeToHearFirstRemoteAudioFrame;
@property unsigned int averageJitterbufferLength;
@property double connectionTime;
@property unsigned int decryptionTimeoutCount;
@property int mkmRecoveryAttemptCount;
@property int startDate;
@property (readonly) NSMutableDictionary *streamGroupStats;

- (void)dealloc;
- (BOOL)isVideoDegraded;
- (unsigned int)RTPeriod;
- (double)markHandshakeCompletion;
- (void)addControlChannelTelemetry:(id)a0;
- (void)markHandshakeStart;
- (void)processVideoDegraded:(BOOL)a0 streamGroup:(id)a1;
- (void)addVideoStreamGroupTelemetry:(id)a0 streamGroupID:(id)a1;
- (void)addAudioStreamGroupTelemetry:(id)a0 streamGroupID:(id)a1;
- (id)initCallWithRemoteParticipantID:(id)a0;
- (void)finalizeCall;
- (void)processDownlinkRateChange:(unsigned int)a0;
- (void)processActualBitrateRateChange:(unsigned int)a0;
- (unsigned long long)downlinkRateSum;
- (unsigned int)downlinkRateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)actualBitrateUpdateCounter;
- (unsigned short)significantVideoStallCount:(id)a0;
- (id)videoDegradedTotalCounter:(id)a0;
- (void)incrementVideoStreamSwitchCounterForStreamGroup:(id)a0;
- (void)incrementAudioStreamSwitchCounterForStreamGroup:(id)a0;
- (double)significantVideoStallTotalTime:(id)a0;
- (unsigned short)audioErasureCount:(id)a0;
- (unsigned short)maxAudioErasureCount:(id)a0;
- (unsigned short)maxVideoStallCount:(id)a0;
- (double)avgJBDelay:(id)a0;
- (double)avgJBTargetSizeChanges:(id)a0;
- (unsigned short)maxJBTargetSizeChanges:(id)a0;
- (unsigned short)minVideoFrameRate:(id)a0;
- (double)audioErasureTotalTime:(id)a0;
- (void)updatePerfTimingWithFirstVideoFrameProcessingDelta:(double)a0 firstMediaReceivedDelta:(double)a1 firstMKIDelta:(double)a2 streamGroupID:(id)a3;
- (void)processVideoDegraded:(BOOL)a0;
- (void)addStreamGroupTelemetry:(id)a0;

@end
