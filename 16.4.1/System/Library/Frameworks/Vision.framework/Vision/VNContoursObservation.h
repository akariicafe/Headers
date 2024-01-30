@class NSArray, NSData;

@interface VNContoursObservation : VNObservation {
    NSData *_compressedPoints;
    struct CGSize { double width; double height; } _imageSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pathLock;
    struct CGPath { } *_normalizedPath;
    struct shared_ptr<apple::vision::libraries::autotrace::EPolygonList> { struct EPolygonList *__ptr_; struct __shared_weak_count *__cntrl_; } _polygonList;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _topLevelContoursIndices;
    struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *__value_; } __end_cap_; } _contourChildrenIndices;
}

@property (readonly) long long contourCount;
@property (readonly) long long topLevelContourCount;
@property (readonly) NSArray *topLevelContours;
@property (readonly) const struct CGPath { } *normalizedPath;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginatingRequestSpecifier:(id)a0 compressedPoints:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_initializePolygonContainers;
- (const void *)childContourIndicesAtIndex:(long long)a0;
- (id)contourAtIndex:(long long)a0 error:(id *)a1;
- (id)contourAtIndexPath:(id)a0 error:(id *)a1;
- (const struct CGPath { } *)normalizedPathInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (const struct EPolygonList { int x0; int x1; struct EPolygon *x2; int x3; } *)polygonList;
- (id)vn_cloneObject;

@end
