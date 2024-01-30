@interface GreenGhostBrightLightTuningParams : NSObject

@property (nonatomic) struct BrightLightTuning { BOOL enabled; BOOL useClippingData; float eitThreshold; void /* unknown type, empty encoding */ faceBoundaryPaddingRatio; struct ClippingDataTuning { float paddingRatio; float minClippedPixelRatio; float clippedPixelRatio; unsigned int maxClippedTilesCount; } clippingDataParams; struct BrightLightDetectionTuning { struct DetectionTuning { struct BrightnessTuning { float threshold; void /* unknown type, empty encoding */ normalizedOpticalCenter; float dilationNormalizedRadius; float erosionNormalizedRadius; } brightParams; struct BlobTuning { void /* unknown type, empty encoding */ radius; float threshold; } blobParams; struct GreenTuning { void /* unknown type, empty encoding */ hueRange; float hueThreshold; void /* unknown type, empty encoding */ saturationThresholds; void /* unknown type, empty encoding */ valueThresholds; float openingNormalizedRadius; float dilationNormalizedRadius; } greenParams; } detectionParams; struct BrightLightRefinementTuning { float openingNormalizedRadius; float dilationNormalizedRadius; float threshold; float maskSurroundThreshold; } refinementParams; } blDetectionParams; struct BrightLightRepairTuning { float surroundMaskDilationNormalizedRadius; float narrowSurroundMaskDilationNormalizedRadius; float inpaintingDisplacement; float inpaintingConfidenceThreshold; float inpaintingStrength; float sharpening; float brightnessOffset; float lumaSimilarityBoost; float normalizedMaxMaskSize; } repairParams; } tuningParams;

- (id)init;
- (int)readPlist:(id)a0;
- (void)setDefaultTuningParams;

@end
