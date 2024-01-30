@class NSData;

@interface PKStrokeMask : NSObject {
    struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> { void *__value_; } __end_cap_; } _maskPaths;
    struct vector<_PKFloatRange, std::allocator<_PKFloatRange>> { struct *__begin_; struct *__end_; struct __compressed_pair<_PKFloatRange *, std::allocator<_PKFloatRange>> { struct *__value_; } __end_cap_; } _centerlineSlices;
}

@property (readonly, nonatomic) NSData *rawValue;

- (id).cxx_construct;
- (id)initWithArchive:(const void *)a0;
- (void)_transformBy:(id /* block */)a0;
- (void).cxx_destruct;
- (id)bezierPath;
- (id)initWithRawValue:(id)a0;
- (void)saveToArchive:(void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)calculateCenterlineSlices:(id)a0;
- (void *)centerlineSlices;
- (id)initWithBezierPath:(id)a0 stroke:(id)a1;
- (id)initWithMaskPaths:(const void *)a0 centerlineSlices:(const void *)a1;
- (void *)maskPaths;
- (id)maskTransformedBy:(id /* block */)a0;

@end
