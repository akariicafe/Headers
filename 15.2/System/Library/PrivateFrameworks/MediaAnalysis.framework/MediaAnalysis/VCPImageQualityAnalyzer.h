@interface VCPImageQualityAnalyzer : NSObject

@property (readonly) float qualityScore;

- (int)analyzeImageQuality:(id)a0 irisPhotoOffsetSec:(float)a1 cancel:(id /* block */)a2;

@end
