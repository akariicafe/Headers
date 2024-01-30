@interface NURegion : NSObject <NSCopying, NSMutableCopying> {
    struct Region { struct unordered_set<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect> > { struct __hash_table<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *>, std::__1::allocator<std::__1::__hash_node<NU::RegionRect, void *> > > { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, NU::RectHash> { unsigned long long x0; } x2; struct __compressed_pair<float, NU::RectEqualTo> { float x0; } x3; } x0; } x0; } *_imp;
}

+ (id)region;
+ (id)regionWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
+ (id)regionWithRegion:(id)a0;

- (double)density;
- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })bounds;
- (id)initWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegion:(id)a0;
- (BOOL)intersectsRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (unsigned long long)count;
- (BOOL)intersectsRegion:(id)a0;
- (double)area;
- (BOOL)isEqualToRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (BOOL)includesRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (BOOL)includesRegion:(id)a0;
- (id)regionByClippingToRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByAddingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionByRemovingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByRemovingRegion:(id)a0;
- (id)regionByClippingToRegion:(id)a0;
- (id)regionByExcludingRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)regionByExcludingRegion:(id)a0;
- (id)regionByScalingBy:(struct CGPoint { double x0; double x1; })a0 withRounding:(long long)a1;
- (id)regionByTranslatingBy:(struct { long long x0; long long x1; })a0;
- (id)regionByGrowingBy:(struct { long long x0; long long x1; })a0;
- (id)regionByGrowingBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (id)regionByShrinkingBy:(struct { long long x0; long long x1; })a0;
- (id)regionByShrinkingBy:(struct { long long x0; long long x1; })a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (id)regionByApplyingOrientation:(long long)a0 imageSize:(struct { long long x0; long long x1; })a1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundPolicy:(long long)a1;
- (id)regionByFlippingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)convertImageRegion:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2;
- (id)regionWithSubregionsOfMinimumDensity:(double)a0;

@end
