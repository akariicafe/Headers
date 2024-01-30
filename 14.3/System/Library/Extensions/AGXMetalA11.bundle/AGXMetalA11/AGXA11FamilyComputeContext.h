@class NSString;
@protocol MTLDevice;

@interface AGXA11FamilyComputeContext : IOGPUMetalComputeCommandEncoder <MTLComputeCommandEncoderSPI> {
    struct ComputeContext { struct DataBufferAllocator { struct DataBufferConfig *x0; id x1; struct IOGPUMetalCommandBufferResourceInfo *x2; struct IOGPUResourceList *x3; struct DataBufferInfo { char *x0; char *x1; char *x2; char *x3; unsigned long long x4; } x4[21]; int x5; } x0; id x1; id x2; id x3; id x4; struct IOGPUResourceList *x5; BOOL x6; BOOL x7; BOOL x8; struct { unsigned int x0; BOOL x1; unsigned int x2; unsigned int x3; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; BOOL x15; struct IOGPUKernelCommand *x16; void *x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; struct ResourceGroupUsage *x21; struct ContextSwitcher { } x22; struct ComputeUSCStateLoader { struct DeviceUSCStateLoader *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x23; struct ComputeIndirectExecutionContext { struct ComputeUSCStateLoader { struct DeviceUSCStateLoader *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; struct DataBufferAllocator *x1; struct IOGPUResourceList *x2; id x3; struct ComputePipeline *x4; struct ComputePipeline *x5; struct ComputeInputParametersESLGen1<AGX::G10::Classes> *x6; unsigned long long x7; unsigned long long x8; unsigned int x9; unsigned int x10; } x24; int x25; int x26; BOOL x27; BOOL x28; BOOL x29; unsigned long long x30; struct AGXStreamHardwareCommandRec *x31; struct AGXComputeCommandRec *x32; struct ComputePipeline *x33; struct ComputeProgramVariant *x34; struct ComputeArgumentTable *x35; struct ComputeDriverArgumentTable<AGX::G10::Classes> { unsigned int x0; unsigned long long x1; struct ComputeSize3D { unsigned int x0; unsigned int x1; unsigned int x2; } x2; struct ComputeSize3D { unsigned int x0; unsigned int x1; unsigned int x2; } x3; struct _AGCWorkgroupSliceLinearSize { unsigned short x0; unsigned short x1; } x4; struct _AGCWorkgroupMulShift { unsigned short x0; unsigned short x1; } x5; struct _AGCWorkgroupMulShift { unsigned short x0; unsigned short x1; } x6; struct ComputeSize3D { unsigned int x0; unsigned int x1; unsigned int x2; } x7; unsigned long long x8; unsigned int x9; BOOL x10; unsigned int x11; unsigned int x12; unsigned int x13[35]; struct TextureArguments { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } x14[96]; struct ArgumentMask<128> { unsigned long long x0[2]; } x15; struct ArgumentMask<128> { unsigned long long x0[2]; } x16; unsigned long long x17; struct ComputeSize3D { unsigned int x0; unsigned int x1; unsigned int x2; } x18; struct ComputeSize3D { unsigned int x0; unsigned int x1; unsigned int x2; } x19; unsigned long long x20[96]; unsigned long long x21[16]; unsigned int x22[55]; unsigned int x23[55]; unsigned int x24[55]; } x36; unsigned int x37[35]; struct IOGPUResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } x38[55]; struct IOGPUResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } x39[96]; unsigned long long x40[55]; char *x41[55]; struct ArgumentMask<128> { unsigned long long x0[2]; } x42; struct ArgumentMask<128> { unsigned long long x0[2]; } x43; struct FenceList *x44; struct FenceList *x45; struct DMASpillBufferDescriptor *x46; struct EnqueueDirtyBits { struct ArgumentMask<128> { unsigned long long x0[2]; } x0; struct ArgumentMask<128> { unsigned long long x0[2]; } x1; unsigned int x2; } x47; BOOL x48; struct ComputeCoalescingResourceTracker *x49; unsigned int x50; unsigned int x51; unsigned int x52[0]; unsigned int x53; struct map<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint> > > { struct __tree<std::__1::__value_type<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AGX::ComputeContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses>::ProgressPoint>, std::__1::less<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x54; void *x55; unsigned long long x56; void *x57; struct SpillInfo { struct SpillConfig { unsigned int x0; } x0; id x1; struct DeviceInternalBuffer<AGX::USCSpillBufferResourceInfo> *x2; BOOL x3; } x58; unsigned int x59; struct ComputeCounterSamplingContextGen1 { id x0; unsigned int x1; unsigned int x2; } x60; BOOL x61; int x62; unsigned int x63; unsigned int x64; struct AGXATelemetryUsage { unsigned long long x0[2]; } x65; unsigned int x66; unsigned int x67; } *_impl;
    unsigned long long _markerID;
}

@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)getDriverUniqueID;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)updateFence:(id)a0;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)useHeap:(id)a0;
- (void)waitForFence:(id)a0;
- (void)setFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)endEncoding;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (id)newKernelDebugInfo;
- (void)enableNullBufferBinds:(BOOL)a0;
- (void)setImageBlockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithCommandBuffer:(id)a0 creationParams:(struct CreationParams { int x0; unsigned int x1; id x2; int x3; } *)a1;
- (void)deferredEndEncoding;
- (id)reInitWithCommandBuffer:(id)a0;
- (void)dispatchWaitFlush;
- (void)dispatchFlushInvalidate;
- (void)dispatchFlushOnly;
- (void)dispatchInvalidateOnly;
- (void)dispatchFenceOnly;
- (void)setParallelExecution:(BOOL)a0;
- (BOOL)parallelExecution;
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (unsigned int)commandBatchIdOffset;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;

@end
