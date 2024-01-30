@class NSString;

@interface MultiwayStream : NSObject {
    NSString *_streamID;
    int _interval;
    int _frequency;
    double _lastReceivedVideoStallTime;
    double _totalVideoStallTime;
    double _maxVideoStallTime;
    unsigned short _significantVideoStallCount;
    unsigned short _maxVideoStallCount;
    unsigned short _minVideoFrameRate;
    unsigned short _audioErasureCount;
    unsigned short _maxAudioErasureCount;
    double _averageFramerateSum;
    unsigned short _averageFramerateReportCounter;
    double _averageJitterLengthSum;
    unsigned short _averageJitterReportCounter;
    double _averageJitterBufferDelay;
    unsigned short _totalJitterBufferDelayCnt;
    unsigned short _targetJBSizeAccumulation;
    unsigned short _targetJBSizeChngCnt;
    unsigned short _maxTargetJBSizeChanges;
    int _totalVideoPacketsReceived;
    int _oooPacketCount;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameIncompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    double _evictedFramesAverageLatePacketDelay;
}

@property (readonly) double currentStallTime;
@property (readonly) double totalAudioErasureTime;

- (void)processData:(id)a0;
- (void)dealloc;
- (unsigned int)RTPeriod;
- (unsigned int)totalFIRDemandCounter;
- (unsigned int)totalFIRCounter;
- (unsigned int)videoFrameDecodedButSkippedCounter;
- (unsigned int)videoFrameIncompleteNextTSCounter;
- (unsigned int)videoFrameTotalIncompleteCounter;
- (unsigned int)decodedVideoFrameEnqueueCounter;
- (unsigned int)evictedFramesLikelyRecoverableCount;
- (unsigned int)evictedFramesTrackedCount;
- (double)evictedFramesAnalysisValidIntervals;
- (double)evictedFramesAverageLatePacketDelay;
- (id)initStreamWithID:(id)a0;
- (unsigned short)significantVideoStallCount;
- (double)videoStallTotalTime;
- (unsigned short)audioErasureCount;
- (double)audioErasureTotalTime;
- (unsigned short)maxAudioErasureCount;
- (unsigned short)maxVideoStallCount;
- (double)averageJitterBufferDelay;
- (double)averageJBTargetSizeChanges;
- (unsigned short)maxJBTargetSizeChanges;
- (unsigned short)minVideoFrameRate;
- (double)averageFramerateSum;
- (unsigned short)averageFramerateReportCounter;
- (double)averageJitterLengthSum;
- (unsigned short)averageJitterReportCounter;
- (unsigned int)oooPacketCount;
- (unsigned int)totalVideoPacketsReceived;

@end
