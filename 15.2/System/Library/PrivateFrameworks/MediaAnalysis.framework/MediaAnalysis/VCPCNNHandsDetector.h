@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetector : NSObject {
    int _cnnInputWidth;
    int _cnnInputHeight;
    int _maxNumRegions;
    int _numClass;
    int _revision;
    float *_inputData;
    NSArray *_outputNames;
    VCPCNNModelEspresso *_modelEspresso;
}

+ (id)detector:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3 revision:(int)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)handsDetection:(struct __CVBuffer { } *)a0 handsRegions:(id)a1 cancel:(id /* block */)a2;
- (int)updateModelWithResConfig:(id)a0;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3 revision:(int)a4;
- (int)createModelWithResConfig:(id)a0;
- (int)generateHandsRegions:(const void *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;
- (void)nonMaxSuppression:(id)a0;
- (int)drawLine:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 point0:(struct CGPoint { double x0; double x1; })a4 point1:(struct CGPoint { double x0; double x1; })a5 drawPoint:(int)a6;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1;
- (int)generateHandsBoxes:(id)a0;
- (int)drawRectangle:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 keypoints:(struct CGPoint { double x0; double x1; } *)a4;

@end
