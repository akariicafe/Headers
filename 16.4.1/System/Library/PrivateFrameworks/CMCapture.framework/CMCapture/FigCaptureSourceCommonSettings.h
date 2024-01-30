@class NSDictionary;

@interface FigCaptureSourceCommonSettings : NSObject

@property (readonly, nonatomic) int initialMemoryPoolSizeMB;
@property (readonly, nonatomic) BOOL livePhotoVitalityScoringSupported;
@property (readonly, nonatomic) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@property (readonly, nonatomic) int previewRegistrationType;
@property (readonly, nonatomic) NSDictionary *photoProcessingTimeRangesInMS;
@property (readonly, nonatomic) BOOL RGBIRStereoFusionThresholdsEnabled;
@property (readonly, nonatomic) BOOL flashMitigationRequired;

- (void)dealloc;

@end
