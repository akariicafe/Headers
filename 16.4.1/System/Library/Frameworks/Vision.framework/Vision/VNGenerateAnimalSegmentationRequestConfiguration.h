@interface VNGenerateAnimalSegmentationRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned int _outputPixelFormat;
    long long _qualityLevel;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
