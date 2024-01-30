@class NSString, SNDetectorHeadConfiguration;

@interface SNDetectorHead : NSObject <SNAnalyzing> {
    SNDetectorHeadConfiguration *_configuration;
    NSString *_detectorBoxName;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    NSString *_inputFeatureName;
    NSString *_outputConfidenceFeatureName;
    NSString *_outputDetectedFeatureName;
}

@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)completeTimingInfoInResult:(id)a0 windowLengthFrames:(unsigned int)a1 usingBox:(void *)a2;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;

@end
