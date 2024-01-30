@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer

@property (retain) NSMutableArray *faceQualityScores;

- (void).cxx_destruct;
- (void)dealloc;
- (int)analyzeDetectedFaces:(struct __CVBuffer { } *)a0 faceResults:(id)a1 cancel:(id /* block */)a2;

@end
