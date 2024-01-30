@class NSString;

@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

@property (readonly, nonatomic) double offset;
@property (nonatomic) double minimumObservableOffset;
@property (nonatomic) double maximumObservableOffset;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (void)updateMinMaxDelayWithSampleRate:(float)a0 micDelay:(float)a1 refDelay:(float)a2 eclen:(float)a3;

@end
