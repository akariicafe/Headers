@class NSDictionary, FigSDOFRenderingTuningParameters, BWFigVideoCaptureDevice;

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_sdofRenderingTuningParametersDictionary;
    BWFigVideoCaptureDevice *_captureDevice;
    FigSDOFRenderingTuningParameters *_sdofRenderingParameters;
    float _zoomFactorAtConfiguration;
    int _renderingVersion;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithNodeConfiguration:(id)a0 sensorIDDictionary:(id)a1 cameraInfoByPortType:(id)a2 sdofRenderingTuningParametersDictionary:(id)a3 captureDevice:(id)a4;

@end
