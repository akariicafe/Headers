@class NSArray, NSMutableDictionary, VCPCNNModelEspresso;

@interface VCPVideoCNNAutoplay : VCPVideoCNNTask {
    NSMutableDictionary *_summaryResults;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    struct vector<float *, std::allocator<float *>> { float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } _inputsData;
    float *_analysisInput;
    BOOL _skip;
}

- (id).cxx_construct;
- (id)results;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)run:(id)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)loadAnalysisResults:(id)a0 audioResults:(id)a1;

@end
