@class VCPCNNData, VCPCNNModel;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (id)init;
- (void).cxx_destruct;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
