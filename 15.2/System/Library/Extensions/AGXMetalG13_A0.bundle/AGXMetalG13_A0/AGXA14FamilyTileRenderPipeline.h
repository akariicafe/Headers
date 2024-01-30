@class AGXA14FamilyTileProgram;

@interface AGXA14FamilyTileRenderPipeline : AGXA14FamilyRenderPipeline {
    AGXA14FamilyTileProgram *_tp;
}

- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (void)dealloc;
- (id)newTileShaderDebugInfo;

@end
