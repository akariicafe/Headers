@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)detector;

- (int)createInput:(float *)a0 keypoints:(struct CGPoint { double x0; double x1; } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)getDetectionScore:(float *)a0;
- (int)planDestroy;
- (int)gestureDetection:(struct CGPoint { double x0; double x1; } *)a0 score:(float *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;

@end
