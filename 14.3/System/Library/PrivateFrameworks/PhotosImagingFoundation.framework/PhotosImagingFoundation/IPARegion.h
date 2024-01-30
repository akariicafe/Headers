@interface IPARegion : NSObject <NSCopying, NSMutableCopying> {
    struct Region { struct unordered_set<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect> > { struct __hash_table<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *>, std::__1::allocator<std::__1::__hash_node<PA::RegionRect, void *> > > { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, PA::RectHash> { unsigned long long x0; } x2; struct __compressed_pair<float, PA::RectEqualTo> { float x0; } x3; } x0; } x0; } *_imp;
}

+ (id)region;
+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)regionWithRegion:(id)a0;
+ (id)regionWithRectArray:(id)a0;

- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegion:(id)a0;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)count;
- (BOOL)intersectsRegion:(id)a0;
- (double)area;
- (BOOL)isEqualToRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (BOOL)includesRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)includesRegion:(id)a0;
- (id)regionByClippingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByAddingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionByRemovingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByRemovingRegion:(id)a0;
- (id)regionByClippingToRegion:(id)a0;
- (id)regionByExcludingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByExcludingRegion:(id)a0;
- (id)regionByTranslatingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByGrowingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByGrowingBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)regionByShrinkingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByShrinkingBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)regionByApplyingOrientation:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)regionByFlippingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRectArray:(id)a0;
- (id)regionByAddingRectArray:(id)a0;
- (id)regionByRemovingRectArray:(id)a0;
- (id)regionByClippingToRectArray:(id)a0;
- (id)regionByScalingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByRoundingUp;
- (id)regionByRoundingDown;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
