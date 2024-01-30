@class NSString;

@interface StreamGroupStats : NSObject

@property double videoDegradedStartTime;
@property BOOL isVideoDegraded;
@property unsigned int videoDegradedTotalCounter;
@property double videoDegradedTotalTime;
@property double videoDegradedMaxLength;
@property double currentStallTime;
@property double lastReceivedVideoStallTime;
@property unsigned int significantVideoStallCount;
@property double videoStalledTotalTime;
@property double videoStalledMaxLength;
@property unsigned int maxVideoStallCount;
@property unsigned int minVideoFrameRate;
@property double totalAudioErasureTime;
@property unsigned int audioErasureCount;
@property unsigned int maxAudioErasureCount;
@property double averageJitterBufferDelay;
@property unsigned int averageJitterBufferDelayCount;
@property double maxJBTargetSizeChanges;
@property double avgJBTargetSizeChanges;
@property unsigned int avgJBTargetSizeChangesCount;
@property unsigned int tickCount;
@property int avSyncOffsetSum;
@property int minAVSyncOffset;
@property int maxAVSyncOffset;
@property unsigned int avSyncOffsetSamplesCount;
@property unsigned int videoStreamSwitchCount;
@property unsigned int audioStreamSwitchCount;
@property (retain) NSString *firstMKIReceived;
@property (retain) NSString *firstMediaReceived;
@property (retain) NSString *firstRemoteVideoFrameDecoded;
@property (retain) NSString *timeToSeeFirstRemoteVideoFrame;
@property unsigned int perfTimerEventCount;

- (id)init;
- (void)dealloc;

@end
