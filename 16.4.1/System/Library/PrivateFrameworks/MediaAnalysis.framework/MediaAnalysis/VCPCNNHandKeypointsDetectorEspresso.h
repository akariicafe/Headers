@class VCPCNNModelEspresso;

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {
    float *_inputData;
    BOOL _forceCPU;
    VCPCNNModelEspresso *_modelEspresso;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)generateHandKeypoints:(struct CGPoint { double x0; double x1; } *)a0 keypointConfidence:(float *)a1 offset:(float)a2;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3 offset:(float *)a4;
- (id)init:(BOOL)a0 sharedModel:(BOOL)a1 modelName:(id)a2;

@end
