@class CIImage, PIParallaxLayoutRequest, PFParallaxLayout;
@protocol PFParallaxLayoutConfiguration, PFParallaxAssetRegions;

@interface _PIParallaxLayoutJob : NURenderJob

@property (readonly, nonatomic) PIParallaxLayoutRequest *layoutRequest;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (retain, nonatomic) id<PFParallaxAssetRegions> layoutRegions;
@property (retain, nonatomic) CIImage *segmentationMatteImage;
@property (retain, nonatomic) CIImage *segmentationConfidenceMapImage;
@property (nonatomic) unsigned long long segmentationClassification;
@property (retain, nonatomic) PFParallaxLayout *layout;
@property (nonatomic) float cropScore;
@property (nonatomic) float layoutScore;
@property (nonatomic) float nFaces;
@property (nonatomic) float segmentationScore;
@property (nonatomic) float localConfidenceScore;
@property (nonatomic) float groundedScore;
@property (nonatomic) float confidenceMapScore;
@property (nonatomic) float parallaxScore;
@property (nonatomic) float mattePureBackground;
@property (nonatomic) float mattePureForeground;
@property (nonatomic) float confidencePureBackground;
@property (nonatomic) float confidencePureForeground;
@property (nonatomic) BOOL clockOverlapAcceptable;
@property (nonatomic) float resolutionRatio;
@property (nonatomic) float faceSize;
@property (nonatomic) float faceLocalConfidence;
@property (nonatomic) BOOL facePositionAcceptable;
@property (nonatomic) BOOL metadataClockOverlapAcceptable;

- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)initWithParallaxLayoutRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
