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

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (id)commandBuffer;
- (void)setFragmentAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (id)initWithCommandBuffer:(id)a0;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (id)description;
- (void)insertDebugSignpost:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)endEncoding;
- (void)dealloc;
- (void)setTileAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (unsigned long long)dispatchType;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)a0;
- (unsigned long long)getDriverUniqueID;
- (void)preEndEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)memoryBarrierNotificationWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)invalidateCompressedTexture:(id)a0;
- (void)invalidateCompressedTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;

@end
