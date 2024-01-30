@interface PKStrokePoint : NSObject <NSCopying> {
    struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *__ptr_; struct __shared_weak_count *__cntrl_; } constants; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } pointsData; } _strokeDataPointsPrivate;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly, nonatomic) double timeOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double azimuth;
@property (readonly, nonatomic) double force;
@property (readonly, nonatomic) double altitude;

+ (struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *x0; struct __shared_weak_count *x1; })_sharedConstantData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })_compressedPoint;
- (id)initWithSlice:(struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *x0; struct __shared_weak_count *x1; } x0; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } x1; } *)a0 index:(long long)a1;
- (struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *x0; struct __shared_weak_count *x1; } x0; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } x1; } *)_strokeDataPointsPrivate;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 timeOffset:(double)a1 size:(struct CGSize { double x0; double x1; })a2 opacity:(double)a3 force:(double)a4 azimuth:(double)a5 altitude:(double)a6;

@end
