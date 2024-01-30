@class MTLAttributeDescriptorArray, MTLBufferLayoutDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLAttributeDescriptorArray *attributes;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long indexBufferIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)stageInputOutputDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)reset;

@end
