@class NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPMovieAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_privateResults;
    VCPAsset *_asset;
    BOOL _supportConditionalAnalysis;
    NSDictionary *_existingAnalysis;
    BOOL _prepareLivePhotoScenes;
}

@property (nonatomic) BOOL allowStreaming;
@property (nonatomic) float maxHighlightDuration;
@property (nonatomic) BOOL faceDominated;
@property (readonly) long long status;

+ (BOOL)canAnalyzeUndegraded:(id)a0 withResources:(id)a1;
+ (id)analyzerWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
+ (float)getMaximumHighlightInSec;
+ (id)getHumanActionClassiferType;

- (void).cxx_destruct;
- (id)privateResults;
- (id)initWithPHAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)analyzeAsset:(id /* block */)a0 streamed:(BOOL *)a1;
- (id)processExistingAnalysisForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 analysisTypes:(unsigned long long *)a1;
- (id)createDecoderForTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)createVideoAnalyzer:(id)a0 withFrameStats:(id)a1;
- (int)postProcessAutoPlayable:(id)a0;
- (int)analyzeVideoSegment:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 forAnalysisTypes:(unsigned long long)a2 cancel:(id /* block */)a3;
- (void)loadPropertiesForAsset:(id)a0;
- (int)performMetadataAnalysisOnAsset:(id)a0 withCancelBlock:(id /* block */)a1;
- (int)analyzeVideoTrack:(id)a0 start:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forAnalysisTypes:(unsigned long long)a2 cancel:(id /* block */)a3;
- (int)generateKeyFrameResource:(id)a0;
- (id)initWithPHAsset:(id)a0 withPausedAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)initWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;

@end
