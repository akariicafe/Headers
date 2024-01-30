@class NSDictionary, AlgosStreamScore;

@interface VCAlgosStreamingScorer : NSObject {
    AlgosStreamScore *_algosScore;
    double _launchTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _blockAlgosScoreLock;
    BOOL _didStartStream;
    BOOL _didStopStream;
    BOOL _didEndStream;
    int _pendingScoringEventCount;
    double _lastStreamTierSwitch;
    double _totalStopDuration;
}

@property (readonly, nonatomic) double resolutionPredictedMOS;
@property (readonly, nonatomic) double frameratePredictedMOS;
@property (readonly, nonatomic) double score;
@property (nonatomic) int maxTargetBitrate;
@property (nonatomic) int avgReceivingBitrate;
@property (readonly, nonatomic) NSDictionary *algosScoreDictionary;

- (void)dealloc;
- (double)finalizeScoreStreamingWithTime:(double)a0;
- (void)addCallFailureWithTime:(double)a0 detailedErrorCode:(int)a1;
- (void)addLargeGapErasureWithTime:(double)a0 largeGapErasureRate:(double)a1;
- (void)addStreamTierSwitchWithTime:(double)a0;
- (void)addVideoStallWithStartTime:(double)a0 endStallTime:(double)a1;
- (void)endWithTime:(double)a0 streamType:(int)a1;
- (id)initWithLaunchTime:(double)a0;
- (double)relativeTime:(double)a0;
- (double)scoreStreaming;
- (void)setVideoFramerate:(double)a0;
- (void)setVideoResolutionWithTime:(double)a0 width:(int)a1 height:(int)a2;
- (void)startWithTime:(double)a0 streamType:(int)a1;
- (void)stopWithTime:(double)a0 streamType:(int)a1;
- (double)streamQuality;
- (void)updateRelativeTime:(double)a0;

@end
