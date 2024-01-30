@interface CHDrawing : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CHDrawingStrokes { struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *__value_; } __end_cap_; } strokeBounds; struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } strokeBoundsValidity; struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *__value_; } __end_cap_; } strokes; long long currentStrokeIndex; unsigned int mSize; struct Matrix<double> { void /* function */ **_vptr$Matrix; double *_data; unsigned int _w; unsigned int _h; } bitmap; double lineHeight; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } sparseBitmap; } drawing;

- (id)debugQuickLookObject;
- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)endStroke;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)strokeCount;
- (unsigned long long)pointCount;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void)setLineHeight:(double)a0;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointForStrokeIndex:(unsigned long long)a0 pointIndex:(unsigned long long)a1;
- (struct Matrix<float> { void /* function */ **x0; float *x1; unsigned int x2; unsigned int x3; })bitmapRepresentationForSize:(struct CGSize { double x0; double x1; })a0;
- (id)xyRepresentation;
- (struct Matrix<float> { void /* function */ **x0; float *x1; unsigned int x2; unsigned int x3; })orientationRepresentationForSampling:(unsigned long long)a0 convolutionWidth:(unsigned long long)a1;
- (float)cumulativePointToPointDistance;
- (float)distanceBetweenFirstAndLastPoint;
- (struct vector<long, std::allocator<long>> { long long *x0; long long *x1; struct __compressed_pair<long *, std::allocator<long>> { long long *x0; } x2; })strokeIndicesSortedByMinXCoordinate;
- (id)sortedDrawingUsingMinXCoordinate;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchingStrokePrefixRangeForDrawing:(id)a0;
- (void)appendSegment:(id)a0 fromDrawing:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIndexes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIndex:(unsigned long long)a0;
- (id)indexesOfStrokesSmallerThanSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqualToDrawing:(id)a0;
- (id)drawingTransformedWithTranslation:(struct CGVector { double x0; double x1; })a0 scaleFactor:(double)a1;
- (id)findLocalYMaximaWithWindowSize:(unsigned long long)a0 excludingStrokes:(struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x0; } x2; } x0; })a1;
- (id)initialSegmentationPointIndicesForDrawing;
- (id)filterPointsWithProximity:(double)a0 fixedPoints:(id)a1 points:(id)a2;
- (id)initWithContentsOfXYString:(id)a0;
- (id)initWithContentsOfJSONDictionary:(id)a0;
- (id)drawingWithStrokesFromIndexSet:(id)a0;
- (struct CGPoint { double x0; double x1; })centroidForStrokeIndexes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeBoundsAtIndex:(unsigned long long)a0;
- (BOOL)isPrefixForDrawing:(id)a0;
- (id)jsonStringRepresentation;
- (id)drawingScaledByFactor:(double)a0;
- (id)drawingSpatiallyResampled:(double)a0 outputPointMap:(void *)a1;
- (id)findSignalCutPointsExcludingStrokes:(struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x0; } x2; } x0; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForDrawingSegmentFromCutPoint:(id)a0 toCutPoint:(id)a1;
- (double)averageCharacterHeightEstimation:(double)a0 minChunkHeight:(double)a1;

@end
