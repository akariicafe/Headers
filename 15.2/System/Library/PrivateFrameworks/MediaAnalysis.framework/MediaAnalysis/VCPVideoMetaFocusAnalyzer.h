@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

@interface VCPVideoMetaFocusAnalyzer : NSObject {
    VCPVideoMetaFocusSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _frameTimeRange;
}

@property (readonly, retain, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)init;
- (int)finalizeAnalysis;
- (void)addSegmentToResults;
- (int)processFrameMetadata:(id)a0;

@end
