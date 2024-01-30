@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property (readonly, nonatomic) unsigned long long totalNumberOfVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDisplayCompositedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfNonDisplayCompositedVideoFrames;
@property (readonly, nonatomic) double totalFrameDelay;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
