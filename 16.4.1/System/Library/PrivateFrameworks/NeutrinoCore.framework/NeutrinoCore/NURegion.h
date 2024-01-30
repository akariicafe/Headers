@interface NURegion : NSObject <NSCopying, NSMutableCopying> {
    void *_imp;
}

+ (id)region;
+ (id)regionWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
+ (id)regionWithRegion:(id)a0;

- (BOOL)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (double)density;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })bounds;
- (id)init;
- (id)description;
- (id)initWithRegion:(id)a0;
- (BOOL)intersectsRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (double)area;
- (BOOL)intersectsRegion:(id)a0;
- (BOOL)includesRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (id)regionByScalingBy:(struct CGPoint { double x0; double x1; })a0 withRounding:(long long)a1;
- (id)convertImageRegion:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2;
- (BOOL)includesRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (BOOL)isEqualToRegion:(id)a0;
- (id)regionByAddingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundPolicy:(long long)a1;
- (id)regionByApplyingOrientation:(long long)a0 imageSize:(struct { long long x0; long long x1; })a1;
- (id)regionByClippingToRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByClippingToRegion:(id)a0;
- (id)regionByExcludingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByExcludingRegion:(id)a0;
- (id)regionByFlippingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByGrowingBy:(struct { long long x0; long long x1; })a0;
- (id)regionByGrowingBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (id)regionByRemovingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByRemovingRegion:(id)a0;
- (id)regionByShrinkingBy:(struct { long long x0; long long x1; })a0;
- (id)regionByShrinkingBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (id)regionByTranslatingBy:(struct { long long x0; long long x1; })a0;
- (id)regionWithSubregionsOfMinimumDensity:(double)a0;

@end
