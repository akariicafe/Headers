@class MTLVertexAttributeDescriptorArray, MTLVertexBufferLayoutDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLVertexAttributeDescriptorArray *attributes;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)vertexDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)reset;

@end
