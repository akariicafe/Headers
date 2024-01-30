@class AlgosStreamScore;

@interface VCAlgosStreamingScorer : NSObject {
    AlgosStreamScore *_algosScore;
    double _launchTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _blockAlgosScoreLock;
    BOOL _didStartStream;
    BOOL _didEndStream;
}

@property (readonly, nonatomic) double score;
@property (nonatomic) int maxTargetBitrate;
@property (nonatomic) int avgReceivingBitrate;
@property (readonly, nonatomic) double predictedMOS;

- (void)dealloc;
- (double)streamQuality;
- (id)initWithLaunchTime:(double)a0;
- (void)startWithTime:(double)a0;
- (void)endWithTime:(double)a0;
- (void)addVideoStallWithStartTime:(double)a0 endStallTime:(double)a1;
- (void)addCallFailureWithTime:(double)a0 detailedErrorCode:(int)a1;
- (void)addLargeGapErasureWithTime:(double)a0 largeGapErasureRate:(double)a1;
- (double)scoreStreaming;
- (void)setVideoResolutionWidth:(int)a0 height:(int)a1;

@end
