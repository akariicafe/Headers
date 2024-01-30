@class AGXA11FamilyVertexProgram, NSString, MTLDebugInstrumentationData, AGXA11FamilyFragmentProgram;
@protocol MTLDevice;

@interface AGXA11FamilyRenderPipeline : _MTLRenderPipelineState <MTLRenderPipelineStateSPI> {
    struct RenderPipeline { struct FragmentProgramVariant *fragment_variant; struct VertexProgramVariant *vertex_variant; struct TileProgramVariant *tile_variant; struct IOGPUResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } resource_info[9]; unsigned int resource_info_count; unsigned int vertex_resource_mask; unsigned int fragment_resource_mask; BOOL owns_variants; unsigned int max_vertex_amplification_count; float sample_coverage; unsigned int sample_mask; unsigned int sample_count; BOOL rasterization_enabled; BOOL render_tile_pipeline; int tess_winding; int tess_partition_mode; int tess_resource_type; int tess_factor_step_function; int tess_factor_format; unsigned int max_tessellation_factor; BOOL tessellation_factor_scale_enabled; BOOL finalized; BOOL supports_indirect_command_buffers; struct ISPToken { union _AgxPppStateHeader { unsigned int all; struct { unsigned char PresIspctl : 1; unsigned char PresIspctlFa : 1; unsigned char PresIspctlFb : 1; unsigned char PresIspctlBa : 1; unsigned char PresIspctlBb : 1; unsigned char PresIspctlDbsc : 1; unsigned char PresFrgShaderUscWords : 1; unsigned char PresFrgShaderVfWords : 1; unsigned char RSVD0 : 2; unsigned char PresRegionClip : 1; unsigned char PresViewport : 1; unsigned char ViewportCount : 4; unsigned char PresWclamp : 1; unsigned char PresOutselects : 1; unsigned char PresVaryingWord0 : 1; unsigned char PresVaryingWord1 : 1; unsigned char RSVD1 : 1; unsigned char PresPppctrl : 1; unsigned char RSVD2 : 2; unsigned char ContextSwitch : 1; unsigned char PresTerminate : 1; unsigned char NotFinalTerm : 1; unsigned char RSVD3 : 5; } bits; } header; union _AgxPppStateIspctl { unsigned int all; struct { unsigned short Visreg : 14; unsigned char Visbool : 1; unsigned char Vistest : 1; unsigned char Scenable : 1; unsigned char Dbenable : 1; unsigned char Bpres : 1; unsigned char TwoSided : 1; unsigned char Ovgmtestdisable : 1; unsigned char Tagwritedisable : 1; unsigned char TwoPassFbOpa : 1; unsigned char MidRenderCompute : 1; unsigned char MustShade : 1; unsigned char SampleMaskSelect : 1; unsigned char TriMergeDisable : 1; unsigned char OverlapCheckMode : 1; unsigned char RSVD0 : 4; } bits; } ctl; union _AgxPppStateIspa { unsigned int all; struct { unsigned char Sref : 8; unsigned char Pointlinewidth : 8; unsigned char Linefilllastpixel : 1; unsigned char Dcmpmode : 3; unsigned char FbPzOcclDisable : 1; unsigned char Dwritedisable : 1; unsigned char Maskval : 1; unsigned char Ovgispassmaskop : 1; unsigned char Passtype : 3; unsigned char TagsortAccumDisable : 1; unsigned char Objtype : 4; } bits; } fa; union _AgxPppStateIspb { unsigned int all; struct { unsigned char Swmask : 8; unsigned char Scmpmask : 8; unsigned char Sop3 : 3; unsigned char Sop2 : 3; unsigned char Sop1 : 3; unsigned char Scmpmode : 3; unsigned char RSVD0 : 4; } bits; } fb; union _AgxPppStateIspa { unsigned int all; struct { unsigned char Sref : 8; unsigned char Pointlinewidth : 8; unsigned char Linefilllastpixel : 1; unsigned char Dcmpmode : 3; unsigned char FbPzOcclDisable : 1; unsigned char Dwritedisable : 1; unsigned char Maskval : 1; unsigned char Ovgispassmaskop : 1; unsigned char Passtype : 3; unsigned char TagsortAccumDisable : 1; unsigned char Objtype : 4; } bits; } ba; union _AgxPppStateIspb { unsigned int all; struct { unsigned char Swmask : 8; unsigned char Scmpmask : 8; unsigned char Sop3 : 3; unsigned char Sop2 : 3; unsigned char Sop1 : 3; unsigned char Scmpmode : 3; unsigned char RSVD0 : 4; } bits; } bb; } isp_state; struct CullToken { union _AgxPppStateHeader { unsigned int all; struct { unsigned char PresIspctl : 1; unsigned char PresIspctlFa : 1; unsigned char PresIspctlFb : 1; unsigned char PresIspctlBa : 1; unsigned char PresIspctlBb : 1; unsigned char PresIspctlDbsc : 1; unsigned char PresFrgShaderUscWords : 1; unsigned char PresFrgShaderVfWords : 1; unsigned char RSVD0 : 2; unsigned char PresRegionClip : 1; unsigned char PresViewport : 1; unsigned char ViewportCount : 4; unsigned char PresWclamp : 1; unsigned char PresOutselects : 1; unsigned char PresVaryingWord0 : 1; unsigned char PresVaryingWord1 : 1; unsigned char RSVD1 : 1; unsigned char PresPppctrl : 1; unsigned char RSVD2 : 2; unsigned char ContextSwitch : 1; unsigned char PresTerminate : 1; unsigned char NotFinalTerm : 1; unsigned char RSVD3 : 5; } bits; } header; float w_clamp; union _PppCtrl { unsigned int all; struct { unsigned char Cullmode : 2; unsigned char Updatebbox : 1; unsigned char Resetbbox : 1; unsigned char Wbuffen : 1; unsigned char Wclampen : 1; unsigned char Pretransform : 1; unsigned char FlatshadeVtx : 2; unsigned char Drawclippededges : 1; unsigned char ClipMode : 2; unsigned char RSVD0 : 3; unsigned char PrimMsaa : 1; unsigned char FrontFaceDir : 1; unsigned char RasterizerDiscard : 1; unsigned short RSVD1 : 14; } bits; } ctl; } cull_state; struct RenderPipeline *sw_tessellation_pipelines[3]; struct ExecuteIndirectPipelineState { unsigned long long pipeline_state_gpu_address; struct RenderPipelineStateObjectGen2 *pipeline_state_cpu_address; struct IOGPUResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } pipeline_resource_info; struct Heap *code_heap; } ei_state; struct ProgramVaryingTable<AGX::G10::Encoders, AGX::G10::Classes> *program_varying_table; } _impl;
    AGXA11FamilyFragmentProgram *_fp;
    AGXA11FamilyVertexProgram *_vp;
}

@property (readonly) unsigned long long maxTileStorageLength;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)staticThreadgroupMemoryLength;
- (unsigned long long)imageBlockSampleLength;
- (void)dealloc;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id).cxx_construct;
- (unsigned int)getVertexShaderTelemetryID;
- (id)newVertexShaderDebugInfo;
- (id)newFragmentShaderDebugInfo;
- (unsigned long long)imageBlockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
