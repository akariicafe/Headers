@interface BWStreamingPersonSegmentationConfiguration : BWInferenceConfiguration

@property (nonatomic) unsigned int inputRotationAngle;
@property (nonatomic) BOOL propagateColorInput;
@property (nonatomic) BOOL cropColorInputToPrimaryCaptureRect;
@property (nonatomic) BOOL useLowFrameRateOptimizedNetwork;

@end
