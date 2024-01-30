@class SNFilterVoiceTriggerResults, NSString, MLModel, SNDetectVoiceTriggerRequest, SNProcessVoiceTriggerModelOutput;

@interface SNVoiceTriggerDetector : NSObject <SNAnalyzing> {
    MLModel *_model;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    SNDetectVoiceTriggerRequest *_request;
    SNProcessVoiceTriggerModelOutput *_modelOutputFilter;
    SNFilterVoiceTriggerResults *_overlapFilter;
}

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
- (id)initWithModel:(id)a0 request:(id)a1;

@end
