@class NSArray;

@interface NUSpace : NSObject

@property (retain) NSArray *transformStack;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)appendTransform:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTransformStack:(id)a0;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0 toSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })transformPointForward:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })transformPointBackward:(struct CGPoint { double x0; double x1; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toSpace:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTimeBackward:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isEqualToSpace:(id)a0;

@end
