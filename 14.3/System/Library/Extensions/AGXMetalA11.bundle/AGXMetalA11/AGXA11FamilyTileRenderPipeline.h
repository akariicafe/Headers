@class AGXA11FamilyTileProgram;

@interface AGXA11FamilyTileRenderPipeline : AGXA11FamilyRenderPipeline {
    AGXA11FamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
