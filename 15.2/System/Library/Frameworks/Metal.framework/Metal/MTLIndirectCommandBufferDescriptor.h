@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {
    struct MTLIndirectCommandBufferDescriptorState { unsigned long long commandTypes; BOOL inheritPipelineState; BOOL inheritBuffers; unsigned long long maxVertexBufferBindCount; unsigned long long maxFragmentBufferBindCount; unsigned long long maxKernelBufferBindCount; unsigned long long resourceIndex; } _state;
}

@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) BOOL inheritPipelineState;
@property (nonatomic) BOOL inheritBuffers;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
