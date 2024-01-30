@interface BWVisionInferenceConfiguration : BWInferenceConfiguration

@property (copy, nonatomic) id /* block */ shouldPreventRequestForSampleBuffer;
@property (nonatomic) BOOL reuseUpstreamFaceObservations;

- (void)dealloc;

@end
