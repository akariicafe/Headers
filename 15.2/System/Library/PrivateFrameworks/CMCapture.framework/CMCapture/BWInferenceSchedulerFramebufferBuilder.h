@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {
    BWInferenceSchedulerGraph *_graph;
    BWInferenceSchedulerJobList *_prototypeJobList;
    unsigned long long _jobCount;
    NSMapTable *_directedEdgesByNode;
    BOOL _didVendFramebuffer;
}

+ (void)initialize;

- (void)dealloc;
- (void)_prepareToConnectNode:(id)a0;
- (id)_connectNodesExpectingInputs:(id)a0 toNodesProvidingOutput:(id)a1 dependencyProvider:(id)a2 nodeForExternalRequirement:(id)a3;
- (id)_addScalingNodesForNodesExpectingInputs:(id)a0 nodesProvidingOutput:(id)a1 dependencyProvider:(id)a2 nodesForExternalRequirements:(id)a3 fencedMediaKeys:(id)a4 iterations:(unsigned long long)a5;
- (void)_populateJobList:(id)a0 fromGraphEdges:(id)a1 withHeadNode:(id)a2 jobTypes:(id)a3;
- (BOOL)_validToDeriveFormat:(id)a0 fromFormat:(id)a1 vendingProvider:(id)a2;
- (id)_newScalingNodesForScalingRequirement:(id)a0 fencedMedia:(BOOL)a1;
- (id)newFramebuffer;
- (id)initWithInferenceRequirements:(id)a0 dependencyProvider:(id)a1 formatProvider:(id)a2;

@end
