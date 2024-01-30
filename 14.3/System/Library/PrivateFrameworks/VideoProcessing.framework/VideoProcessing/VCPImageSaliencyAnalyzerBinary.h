@class VCPCNNData, NSURL, VCPCNNModel;

@interface VCPImageSaliencyAnalyzerBinary : VCPImageSaliencyAnalyzer {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (void).cxx_destruct;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (float)outputScaling;
- (int)getSalientRegions:(id /* block */)a0;

@end
