@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying>

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (id)_initWithProcessAppNapState:(id)a0;
- (unsigned short)encodedState;

@end
