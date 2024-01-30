@class NSArray, MTLStageInputOutputDescriptor, MTLVertexDescriptor;
@protocol MTLBuffer;

@interface SCNMTLMesh : NSObject {
    MTLVertexDescriptor *_vertexDescriptor;
    unsigned long long _vertexDescriptorHash;
    unsigned long long _tessellationVertexDescriptorHash;
}

@property (copy, nonatomic) NSArray *buffers;
@property (copy, nonatomic) NSArray *elements;
@property (retain, nonatomic) MTLStageInputOutputDescriptor *stageDescriptor;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) unsigned long long vertexDescriptorHash;
@property (readonly, nonatomic) MTLVertexDescriptor *tessellationVertexDescriptor;
@property (readonly, nonatomic) unsigned long long tessellationVertexDescriptorHash;
@property (retain, nonatomic) id<MTLBuffer> volatileBuffer;
@property (nonatomic) unsigned long long volatileOffset;
@property (nonatomic) unsigned long long volatileStride;
@property (nonatomic) unsigned long long volatileSize;
@property (nonatomic) long long verticesCount;
@property (nonatomic) long long mutabilityTimestamp;

- (id)description;
- (void)dealloc;
- (id)bufferForAttribute:(long long)a0;
- (void)buildTessellationVertexDescriptorIfNeeded;

@end
