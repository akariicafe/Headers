@class NSString;

@interface SNSpeechUtteranceDetector : NSObject <SNAnalyzing> {
    long long _requestType;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

@property (readonly, nonatomic) BOOL hardVAD;
@property (readonly) double decisionDelay;
@property (readonly, nonatomic) void *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (float)softVAD;
- (id).cxx_construct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)resultsFromBox:(void *)a0 renderedWithFrameCount:(int)a1;
- (id)sharedProcessorConfiguration;

@end
