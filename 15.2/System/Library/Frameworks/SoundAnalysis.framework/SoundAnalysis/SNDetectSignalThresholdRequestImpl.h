@class NSString;

@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double magnitudeThreshold;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (id)initWithSampleRate:(double)a0 blockSize:(unsigned int)a1 magnitudeThreshold:(double)a2;

@end
