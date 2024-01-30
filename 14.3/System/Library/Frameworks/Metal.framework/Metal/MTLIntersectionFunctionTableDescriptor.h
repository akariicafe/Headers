@interface MTLIntersectionFunctionTableDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long functionCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)intersectionFunctionTableDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
