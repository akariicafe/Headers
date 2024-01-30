@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNPersonDetector : NSObject {
    int _maxNumRegions;
    float *_inputData;
    NSArray *_outputNames;
    struct vector<float *, std::allocator<float *>> { float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } _outputsData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 inputHeight:(int)a2 inputWidth:(int)a3;
- (int)generatePersonBoxes:(id)a0;
- (int)generatePersonRegions:(const void *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;
- (void)nonMaxSuppression:(id)a0;
- (int)personDetection:(struct __CVBuffer { } *)a0 personRegions:(id)a1 cancel:(id /* block */)a2;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;

@end
