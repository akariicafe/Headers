@class NSString, VCPCNNModelEspresso;

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {
    int _maxNumRegions;
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (int)createModel:(int)a0 srcWidth:(int)a1;
- (int)generatePetsBoxes:(id)a0 faceBoxes:(id)a1 cancel:(id /* block */)a2;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (id)initWithMaxNumRegions:(int)a0;

@end
