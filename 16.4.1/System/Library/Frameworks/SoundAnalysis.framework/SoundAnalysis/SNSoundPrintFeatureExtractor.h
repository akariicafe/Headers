@class NSString, SNSoundPrintFeatureExtractorConfiguration, SNSystemConfiguration;

@interface SNSoundPrintFeatureExtractor : NSObject <SNProcessing> {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    SNSystemConfiguration *_systemConfiguration;
    SNSoundPrintFeatureExtractorConfiguration *_configuration;
}

@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;

@end
