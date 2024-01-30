@class NSString, SNTimeDurationConstraint;

@interface SNLogMelSpectrogramExtractor : NSObject <SNFeaturePrintExtractorProtocol>

@property (class, readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } defaultWindowDuration;
@property (class, readonly, nonatomic) SNTimeDurationConstraint *windowDurationConstraint;

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) unsigned int blockSize;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)sampleRate;
+ (id)createWithSampleRate:(double)a0 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 overlapFactor:(float)a2 error:(id *)a3;
+ (id)resultsBoxName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOverlapFactor:(float)a0 error:(id *)a1;

@end
