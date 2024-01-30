@interface NSBlock : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)performAfterDelay:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)debugDescription;
- (void)invoke;

@end
