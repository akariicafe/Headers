@class NSString, NSMutableDictionary;

@interface MultiwayCall : NSObject {
    int _interval;
    int _frequency;
    unsigned long long _downlinkRateSum;
    unsigned int _downlinkRateUpdateCounter;
    unsigned long long _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _averageReceiveFramerate;
}

@property (readonly) NSString *remoteParticipantID;
@property (readonly, getter=isLive) BOOL live;
@property BOOL isAudioEnabled;
@property BOOL isVideoEnabled;
@property BOOL isFullSize;
@property int duration;
@property int adjustedDuration;
@property (readonly) NSMutableDictionary *streams;
@property unsigned int videoStreamSwitchCount;
@property unsigned int audioStreamSwitchCount;
@property unsigned int downlinkTargetBitrateSwitchCount;
@property unsigned int timeToSeeFirstRemoteVideoFrame;
@property unsigned int timeToHearFirstRemoteAudioFrame;
@property unsigned int averageJitterbufferLength;
@property double connectionTime;
@property unsigned int firstVideoFrameReceivedDelta;
@property unsigned int firstMKIReceivedDelta;
@property unsigned int firstDecodableVideoFrameDelta;
@property double videoDegradedStartTime;
@property BOOL isVideoDegraded;
@property unsigned int videoDegradedTotalCounter;
@property double videoDegradedTotalTime;
@property double videoDegradedMaxLength;

- (void)dealloc;
- (unsigned int)RTPeriod;
- (unsigned short)significantVideoStallCount;
- (unsigned short)audioErasureCount;
- (double)audioErasureTotalTime;
- (unsigned short)maxAudioErasureCount;
- (unsigned short)maxVideoStallCount;
- (unsigned short)maxJBTargetSizeChanges;
- (unsigned short)minVideoFrameRate;
- (id)initCallWithRemoteParticipantID:(id)a0;
- (void)processDownlinkRateChange:(unsigned int)a0;
- (void)processActualBitrateRateChange:(unsigned int)a0;
- (unsigned long long)downlinkRateSum;
- (unsigned int)downlinkRateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)actualBitrateUpdateCounter;
- (double)significantVideoStallTotalTime;
- (double)avgJBDelay;
- (double)avgJBTargetSizeChanges;
- (void)processVideoDegraded:(BOOL)a0;

@end
