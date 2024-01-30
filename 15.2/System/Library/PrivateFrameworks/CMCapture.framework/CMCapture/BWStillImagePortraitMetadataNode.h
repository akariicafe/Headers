@class NSDictionary, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigSDOFRenderingTuningParameters *_sdofTuningParams;
    int _renderingVersion;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithNodeConfiguration:(id)a0 sensorIDDictionary:(id)a1 cameraInfoByPortType:(id)a2;
- (int)_loadAndConfigureSDOFRenderering;
- (void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)a0;

@end
