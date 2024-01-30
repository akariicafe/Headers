@interface VNGenerateOpticalFlowRequestConfiguration : VNImageBasedRequestConfiguration {
    BOOL _keepNetworkOutput;
    unsigned int _outputPixelFormat;
    unsigned long long _computationAccuracy;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
