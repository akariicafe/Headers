@class AGXA11FamilyTileProgram;

@interface AGXA11FamilyTileRenderPipeline : AGXA11FamilyRenderPipeline {
    AGXA11FamilyTileProgram *_tp;
}

- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newTileShaderDebugInfo;
- (void)dealloc;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;

@end
