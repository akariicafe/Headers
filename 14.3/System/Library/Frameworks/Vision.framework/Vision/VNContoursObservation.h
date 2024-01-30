@class NSArray, NSData;

@interface VNContoursObservation : VNObservation {
    NSData *_compressedPoints;
    struct CGSize { double width; double height; } _imageSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pathLock;
    struct CGPath { } *_normalizedPath;
    struct EPolygonList { int nPolygons; int maxPolygons; struct EPolygon *polygons; int firstFreeIndex; } _polygonList;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } _topLevelContoursIndices;
    struct vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > > { struct vector<unsigned int, std::__1::allocator<unsigned int> > *__begin_; struct vector<unsigned int, std::__1::allocator<unsigned int> > *__end_; struct __compressed_pair<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > *, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > > { struct vector<unsigned int, std::__1::allocator<unsigned int> > *__value_; } __end_cap_; } _contourChildrenIndices;
}

@property (readonly) long long contourCount;
@property (readonly) long long topLevelContourCount;
@property (readonly) NSArray *topLevelContours;
@property (readonly) const struct CGPath { } *normalizedPath;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (const struct EPolygonList { int x0; int x1; struct EPolygon *x2; int x3; } *)polygonList;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 compressedPoints:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_initializePolygonContainers;
- (id)contourAtIndex:(long long)a0 error:(id *)a1;
- (id)contourAtIndexPath:(id)a0 error:(id *)a1;
- (const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } *)childContourIndicesAtIndex:(long long)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
