@class NSDictionary;

@interface BWStreamingCameraCalibrationDataNode : BWNode {
    NSDictionary *_cameraInfoByPortType;
    float _pixelSizeInMicrons;
    struct { float forwardOrders[8]; float inverseOrders[8]; } _lensDistortionCorrectionBasePolynomial;
    struct { float forwardOrders[8]; float inverseOrders[8]; } _lensDistortionCorrectionDynamicPolynomial;
}

@property (nonatomic) int rotationDegrees;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;

+ (void)initialize;

- (id)nodeType;
- (int)_getLensDistortionCenterWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 referenceDimensions:(struct CGSize { double x0; double x1; })a1 distortionCenterOut:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithCameraInfoByPortType:(id)a0;
- (id)nodeSubType;
- (int)_getDistortionCoefficientsWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 lensDistortionCoefficientsOut:(id *)a1 inverseLensDistortionCoefficientsOut:(id *)a2;
- (id)_cameraCalibrationDataDictionaryFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 portType:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
