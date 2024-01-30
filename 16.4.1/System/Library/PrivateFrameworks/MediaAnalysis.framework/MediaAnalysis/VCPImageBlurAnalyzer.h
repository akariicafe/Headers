@class NSArray, VCPCNNModel, VCPCNNBlurAnalyzer, VCPCNNData;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {
    float _sharpnessBlocks[16];
    NSArray *_faces;
    NSArray *_framePTSResults;
    NSArray *_homographyResults;
    VCPCNNModel *_faceModel;
    VCPCNNData *_faceInput;
    float _livePhotoStillDisplayTime;
    float _imageExposureTime;
    BOOL _useGPU;
    BOOL _sdof;
    float _contrast;
    VCPCNNBlurAnalyzer *_blurAnalyzer;
}

@property (readonly) float sharpness;
@property (readonly) float textureScore;

- (void).cxx_destruct;
- (void)setFaceResults:(id)a0;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 withPreAnalysisScore:(float)a2 results:(id *)a3 cancel:(id /* block */)a4;
- (int)computeCNNFaceSharpness:(struct __CVBuffer { } *)a0 result:(float *)a1 cancel:(id /* block */)a2;
- (int)computeGyroSharpness:(float *)a0;
- (int)computeLocalSharpness:(struct __CVBuffer { } *)a0;
- (int)computeSharpnessScore:(float *)a0 forFacesInImage:(struct __CVBuffer { } *)a1;
- (float)estimateDistance:(id)a0 prevHomography:(id)a1;
- (float)getFaceScoreFromOutput:(id)a0 ratio:(float)a1;
- (id)initWithFaceResults:(id)a0 sdof:(BOOL)a1;
- (id)initWithFaceResults:(id)a0 sdof:(BOOL)a1 revision:(unsigned long long)a2;
- (int)prepareFaceBlurModel:(BOOL)a0;
- (int)scaleRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ofImage:(struct __CVBuffer { } *)a1 toData:(id)a2 withWidth:(int)a3 andHeight:(int)a4;
- (void)setGyroSharpnessParam:(id)a0 homographyResults:(id)a1 livePhotoStillDisplayTime:(float)a2 imageExposureTime:(float)a3;
- (void)spatialPooling;

@end
