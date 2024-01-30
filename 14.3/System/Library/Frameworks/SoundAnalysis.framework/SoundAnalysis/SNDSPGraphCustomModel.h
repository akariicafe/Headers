@class MLMultiArrayConstraint, MLMultiArray, MLModelDescription;

@interface SNDSPGraphCustomModel : NSObject {
    MLModelDescription *_modelDescription;
    MLMultiArrayConstraint *_inputConstraint;
    MLMultiArrayConstraint *_outputConstraint;
    struct unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> > { struct __compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> > { struct Graph *__value_; } __ptr_; } _graph;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _scratchFloatSpace;
    MLMultiArray *_modelOutput;
}

@property (copy, nonatomic) id /* block */ preProcessCallback;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (id)initWithModelDescription:(id)a0 expectedInputShape:(id)a1 expectedOutputShape:(id)a2 graph:(struct unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> > { struct __compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> > { struct Graph *x0; } x0; })a3 error:(id *)a4;

@end
