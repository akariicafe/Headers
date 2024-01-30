@class NSMutableDictionary, NSDictionary, VCPAsset, PHAsset;

@interface VCPPhotoAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    unsigned long long _irisAnalyses;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    VCPAsset *_asset;
    float _imageBlurTextureScore;
    float _preAnalysisSharpnessScore;
    BOOL _faceDominated;
    BOOL _requirePHFaceAnalysis;
    PHAsset *_phAsset;
}

@property (nonatomic) BOOL allowStreaming;
@property (readonly) long long status;

+ (BOOL)canAnalyzeUndegraded:(id)a0 withResources:(id)a1;
+ (id)analyzerWithVCPAsset:(id)a0 forAnalysisTypes:(unsigned long long)a1;
+ (id)resourceForAsset:(id)a0 withResources:(id)a1;

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)analyzeAsset:(id /* block */)a0;
- (void)processExistingAnalyses:(id)a0;
- (id)initWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)a0;
- (int)downscaleImage:(struct __CVBuffer { } *)a0 scaledImage:(struct __CVBuffer **)a1 majorDimension:(int)a2;
- (void)_reportPetsAnalysisWithResults:(id)a0;
- (id)existingAnalysisForMovieAnalyzer;
- (int)checkFaceDominant;
- (int)analyzeImage:(unsigned long long *)a0 performedAnalyses:(unsigned long long *)a1 cancel:(id /* block */)a2;

@end
