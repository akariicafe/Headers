@class NSArray, VCPCNNModelEspresso, PHFetchResult, NSMutableArray;

@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer {
    NSMutableArray *_results;
    NSArray *_existingResults;
    VCPCNNModelEspresso *_model;
    PHFetchResult *_phFaces;
    float *_inputData;
}

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromPHFace:(id)a0;
- (int)aggregateWith:(id)a0;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithPHFaces:(id)a0 existingResults:(id)a1;

@end
