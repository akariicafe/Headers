@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNPersonDetector : NSObject {
    int _maxNumRegions;
    float *_inputData;
    NSArray *_outputNames;
    struct vector<float *, std::__1::allocator<float *> > { float **__begin_; float **__end_; struct __compressed_pair<float **, std::__1::allocator<float *> > { float **__value_; } __end_cap_; } _outputsData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
}

- (void).cxx_destruct;
- (int)generatePersonBoxes:(id)a0;
- (int)generatePersonRegions:(const struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> > { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::__1::allocator<espresso_buffer_t> > { struct *x0; } x2; } *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 inputHeight:(int)a2 inputWidth:(int)a3;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;
- (int)personDetection:(struct __CVBuffer { } *)a0 personRegions:(id)a1 cancel:(id /* block */)a2;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;
- (void)nonMaxSuppression:(id)a0;
- (id).cxx_construct;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;

@end
