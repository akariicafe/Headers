@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying>

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithProcessAppNapState:(id)a0;
- (unsigned short)encodedState;

@end
