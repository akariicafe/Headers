@class NSString;
@protocol SNFeaturePrintExtractorProtocol;

@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    id<SNFeaturePrintExtractorProtocol> _featureExtractor;
    NSString *_outputFeatureName;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _windowDuration;
    int _resultsToDiscardCount;
}

@property (nonatomic) long long featurePrintType;
@property (nonatomic) float overlapFactor;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extractDefaultOutputFeatureFromFeatureProvider:(id)a0;
+ (id)extractOutputWithOptionalName:(id)a0 fromFeatureProvider:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;
- (id)initWithFeaturePrintType:(long long)a0 overlapFactor:(float)a1 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
