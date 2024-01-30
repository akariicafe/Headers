@class NSDictionary, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigSDOFRenderingTuningParameters *_sdofTuningParams;
    int _renderingBundleVersion;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (int)_loadAndConfigureSDOFRenderering;
- (void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)a0;
- (id)initWithSensorIDDictionary:(id)a0 cameraInfoByPortType:(id)a1;

@end
