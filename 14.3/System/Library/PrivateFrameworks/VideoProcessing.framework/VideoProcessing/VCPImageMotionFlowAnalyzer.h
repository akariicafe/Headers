@class NSArray, VCPCNNModelEspresso, NSString, NSMutableArray;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    struct vector<float *, std::__1::allocator<float *> > { float **__begin_; float **__end_; struct __compressed_pair<float **, std::__1::allocator<float *> > { float **__value_; } __end_cap_; } _inputsData;
    int _srcWidth;
    int _srcHeight;
    int _cnnOutputWidth;
    int _cnnOutputHeight;
    NSString *_resConfig;
    NSMutableArray *_results;
    float *_flow;
    BOOL _flushModel;
}

+ (id)sharedModel:(id)a0 inputNames:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)prepareModelWithAspectRatio:(float)a0;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;
- (int)analyzeImages:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 cancel:(id /* block */)a2;
- (float *)getFlowWithHeight:(int *)a0 andWidth:(int *)a1;
- (id).cxx_construct;
- (int)creatModel;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChannels:(int)a2;

@end
