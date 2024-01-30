@class NSArray, NSMutableArray, VCPCNNModelEspresso;

@interface VCPVideoCNNHighlight : VCPVideoCNNTask {
    NSMutableArray *_results;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    struct vector<float *, std::allocator<float *>> { float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } _inputsData;
    float *_analysisInput;
}

- (id).cxx_construct;
- (id)results;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)loadAnalysisResults:(id)a0;
- (int)run:(id)a0 withPersons:(id)a1 andRegionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;

@end
