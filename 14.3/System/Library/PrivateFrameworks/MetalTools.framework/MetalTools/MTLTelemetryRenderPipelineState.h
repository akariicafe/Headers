@class NSSet, MTLTelemetryDevice;

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
    BOOL hasAnisoConstantSampler;
    NSSet *activeFragmentSamplers;
    NSSet *activeFragmentTextures;
}

+ (unsigned int)generateUniqueID;

- (void)dealloc;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (void)accumulateUsage;

@end
