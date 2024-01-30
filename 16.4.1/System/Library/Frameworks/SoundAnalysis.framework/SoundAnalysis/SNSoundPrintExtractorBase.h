@class SNTimeDurationConstraint;

@interface SNSoundPrintExtractorBase : NSObject

@property (class, readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } defaultWindowDuration;
@property (class, readonly, nonatomic) SNTimeDurationConstraint *windowDurationConstraint;

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) unsigned int blockSize;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } graph;

+ (unsigned int)sampleRate;
+ (id)resultsBoxName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSoundPrintModel:(id)a0 sampleRate:(double)a1 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 overlapFactor:(float)a3 error:(id *)a4;

@end
