@class NSString, SNTimeDurationConstraint;

@interface SNSoundPrintAExtractor : SNSoundPrintExtractorBase <SNFeaturePrintExtractorProtocol>

@property (class, readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } defaultWindowDuration;
@property (class, readonly, nonatomic) SNTimeDurationConstraint *windowDurationConstraint;

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) unsigned int blockSize;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithSampleRate:(double)a0 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 overlapFactor:(float)a2 error:(id *)a3;

- (id)initWithSampleRate:(double)a0 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 overlapFactor:(float)a2 error:(id *)a3;

@end
