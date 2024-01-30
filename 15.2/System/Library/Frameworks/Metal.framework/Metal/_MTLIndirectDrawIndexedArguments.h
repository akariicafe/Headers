@interface _MTLIndirectDrawIndexedArguments : NSObject

@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) void *indexBufferVirtualAddress;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseVertex;
@property (nonatomic) unsigned long long baseInstance;

@end
