@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {
    BWInferenceSchedulerGraph *_graph;
    BWInferenceSchedulerJobList *_prototypeJobList;
    unsigned long long _jobCount;
    NSMapTable *_directedEdgesByNode;
    BOOL _didVendFramebuffer;
}

+ (void)initialize;

- (id)initWithInferenceRequirements:(id)a0 dependencyProvider:(id)a1 formatProvider:(id)a2;
- (void)dealloc;
- (id)newFramebuffer;

@end
