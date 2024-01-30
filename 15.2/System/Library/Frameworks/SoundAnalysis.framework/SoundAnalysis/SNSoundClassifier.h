@class NSString, MLModel, NSArray;

@interface SNSoundClassifier : NSObject <SNAnalyzing> {
    MLModel *_model;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    unsigned int _modelBlockSize;
    int _resultsToDiscardCount;
    NSArray *_feedbackConnections;
    NSArray *_classLabelsDenylist;
}

@property (readonly) double overlapFactor;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } windowDuration;
@property (readonly) NSString *classifierIdentifier;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)completeTimingInfoInResult:(id)a0 usingBox:(void *)a1 modelBlockSize:(unsigned int)a2;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;
- (id)initWithMLModel:(id)a0 overlapFactor:(double)a1 windowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 classifierIdentifier:(id)a3 error:(id *)a4;

@end
