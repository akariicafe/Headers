@interface VNPersonSegmentationGeneratorFast : VNPersonSegmentationGenerator

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (id)outputMaskBlobName;
+ (BOOL)rotateImageToMatchNetworkOrientation;
+ (BOOL)inputMaskRequired;

@end
