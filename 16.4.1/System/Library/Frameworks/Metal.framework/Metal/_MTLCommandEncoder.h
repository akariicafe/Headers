@class NSString, _MTLCommandBuffer, NSMutableArray;
@protocol MTLFence, MTLDevice, MTLCommandBuffer;

@interface _MTLCommandEncoder : _MTLObjectWithLabel {
    id<MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _labelTraceID;
    id<MTLFence> _progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    BOOL _isProgressTrackingEncoder;
    NSMutableArray *_debugSignposts;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (readonly, nonatomic, getter=getType) unsigned long long type;
@property (nonatomic) unsigned long long numThisEncoder;
@property (readonly) unsigned long long dispatchType;

- (void)setMeshIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)endEncoding;
- (unsigned long long)dispatchType;
- (void)setTileAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (unsigned long long)getDriverUniqueID;
- (void)setMeshIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (id)commandBuffer;
- (void)setMeshSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setMeshAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFragmentAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setMeshBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)setMeshBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)popDebugGroup;
- (id)initWithCommandBuffer:(id)a0;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setMeshVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)pushDebugGroup:(id)a0;
- (void)setObjectSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)setObjectBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setMeshBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setObjectVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMeshTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMeshVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)invalidateCompressedTexture:(id)a0;
- (void)setMeshSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObjectBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)setObjectSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setObjectTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)setObjectVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setMeshTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)invalidateCompressedTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)setMeshSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setObjectBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setMeshBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setObjectSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMeshSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)a0;
- (void)setThreadgroupDistributionMode:(long long)a0;
- (void)setObjectBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)description;
- (void)setObjectSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertDebugSignpost:(id)a0;
- (void)memoryBarrierNotificationWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)a0;
- (void)preEndEncoding;
- (void)setThreadgroupPackingDisabled:(BOOL)a0;

@end
