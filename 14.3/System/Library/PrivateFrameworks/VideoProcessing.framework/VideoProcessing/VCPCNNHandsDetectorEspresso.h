@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {
    int _maxNumRegions;
    float *_inputData;
    NSArray *_outputNames;
    VCPCNNModelEspresso *_modelEspresso;
}

- (void).cxx_destruct;
- (void)dealloc;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)createModelWithResConfig:(id)a0;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;
- (int)generateHandsBoxes:(id)a0;
- (int)updateModelWithResConfig:(id)a0;

@end
