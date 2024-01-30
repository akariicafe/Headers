@class VCPCNNModelEspresso;

@interface VCPCNNGazeAnalysis : NSObject {
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 eyeOpenness:(BOOL *)a2;

@end
