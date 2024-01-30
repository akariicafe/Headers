@interface BWVisionInferenceConfiguration : BWInferenceConfiguration

@property (copy, nonatomic) id /* block */ shouldPreventRequestForSampleBuffer;

- (void)dealloc;

@end
