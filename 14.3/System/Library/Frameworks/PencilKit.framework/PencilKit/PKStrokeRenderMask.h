@class PKStroke;
@protocol PKStrokeRenderCache;

@interface PKStrokeRenderMask : NSObject <NSCopying> {
    struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *__begin_; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *__end_; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *__value_; } __end_cap_; } _maskPaths;
}

@property (readonly, nonatomic) PKStroke *stroke;
@property (readonly, nonatomic) id<PKStrokeRenderCache> renderCache;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (const struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x0; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x1; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x0; } x2; } *)maskPaths;
- (id)initWithStroke:(id)a0 renderCache:(id)a1 maskPaths:(const struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x0; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x1; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > > { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > *x0; } x2; } *)a2;

@end
