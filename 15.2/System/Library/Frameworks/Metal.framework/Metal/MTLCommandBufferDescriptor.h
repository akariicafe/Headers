@interface MTLCommandBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL retainedReferences;
@property (nonatomic) unsigned long long errorOptions;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
