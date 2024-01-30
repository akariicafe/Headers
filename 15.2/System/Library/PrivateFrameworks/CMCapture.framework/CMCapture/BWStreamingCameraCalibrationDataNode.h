@class NSDictionary;

@interface BWStreamingCameraCalibrationDataNode : BWNode {
    NSDictionary *_cameraInfoByPortType;
}

@property (nonatomic) int rotationDegrees;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;

+ (void)initialize;

- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)a0;

@end
