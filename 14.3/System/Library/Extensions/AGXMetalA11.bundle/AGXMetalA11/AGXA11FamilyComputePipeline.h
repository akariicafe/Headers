@class NSString, AGXA11FamilyBuffer, AGXA11FamilyComputeProgram, MTLDebugInstrumentationData;
@protocol MTLDevice;

@interface AGXA11FamilyComputePipeline : _MTLComputePipelineState <MTLComputePipelineStateSPI> {
    struct ComputePipeline { struct ComputeProgramVariant *compute_variant; BOOL supports_indirect_command_buffers; BOOL finalized; BOOL descendent_pipeline; struct ExecuteIndirectPipelineState { unsigned long long pipeline_state_gpu_address; struct ComputePipelineStateObjectESLGen1<AGX::G10::Classes> *pipeline_state_cpu_address; struct IOGPUResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } pipeline_resource_info; struct Heap *code_heap; } ei_state; struct RuntimeState { struct RetainedObjCPointer<AGXA11FamilyBuffer *> { AGXA11FamilyBuffer *ptr; } buffer; struct ExternSamplerDMAInfo { unsigned int dst_index; unsigned int num_bytes; unsigned long long address; } extern_sampler_dma_info; unsigned int max_temporary_register_count; unsigned int total_spill_buffer_bytes; } loader_runtime_state; struct vector<std::__1::shared_ptr<AGX::G10::DynamicLibrary>, std::__1::allocator<std::__1::shared_ptr<AGX::G10::DynamicLibrary> > > { struct shared_ptr<AGX::G10::DynamicLibrary> *__begin_; struct shared_ptr<AGX::G10::DynamicLibrary> *__end_; struct __compressed_pair<std::__1::shared_ptr<AGX::G10::DynamicLibrary> *, std::__1::allocator<std::__1::shared_ptr<AGX::G10::DynamicLibrary> > > { struct shared_ptr<AGX::G10::DynamicLibrary> *__value_; } __end_cap_; } dylibs; struct vector<const IOGPUResourceInfo *, std::__1::allocator<const IOGPUResourceInfo *> > { struct IOGPUResourceInfo **__begin_; struct IOGPUResourceInfo **__end_; struct __compressed_pair<const IOGPUResourceInfo **, std::__1::allocator<const IOGPUResourceInfo *> > { struct IOGPUResourceInfo **__value_; } __end_cap_; } dylib_resource_infos; unsigned long long base_dylib_resource_info_count; struct unordered_map<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *>, std::__1::hash<id<MTLFunction> >, std::__1::equal_to<id<MTLFunction> >, std::__1::allocator<std::__1::pair<const id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> > > > { struct __hash_table<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, std::__1::__unordered_map_hasher<id<MTLFunction>, std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, std::__1::hash<id<MTLFunction> >, true>, std::__1::__unordered_map_equal<id<MTLFunction>, std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, std::__1::equal_to<id<MTLFunction> >, true>, std::__1::allocator<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<id<MTLFunction>, std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, std::__1::hash<id<MTLFunction> >, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<id<MTLFunction>, std::__1::__hash_value_type<id<MTLFunction>, RetainedObjCPointer<AGXA11FamilyFunctionHandle *> >, std::__1::equal_to<id<MTLFunction> >, true> > { float __value_; } __p3_; } __table_; } visible_function_handle_map; } _impl;
    AGXA11FamilyComputeProgram *_cp;
    AGXA11FamilyComputePipeline *_basePipeline;
}

@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (unsigned int)getComputeKernelTelemetryID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)functionHandleWithFunction:(id)a0;
- (id)initWithParent:(id)a0;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id).cxx_construct;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (unsigned long long)imageBlockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
