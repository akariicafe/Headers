@interface MTLCommandBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL retainedReferences;
@property (nonatomic) unsigned long long errorOptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
