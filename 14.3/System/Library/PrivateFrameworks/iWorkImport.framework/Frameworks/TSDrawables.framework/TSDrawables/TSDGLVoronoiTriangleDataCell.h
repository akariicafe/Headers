@interface TSDGLVoronoiTriangleDataCell : NSObject

@property (readonly, nonatomic) unsigned long long triangleCount;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) struct { float x0; float x1; } *vertexData;
@property (readonly, nonatomic) struct { float x; float y; } centerPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (void)dealloc;
- (id)initWithTrianglePoints:(struct { float x0; float x1; } *)a0;
- (void)p_setupTriangleDataWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> *x0; struct segment_data<double> *x1; struct __compressed_pair<boost::polygon::segment_data<double> *, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> *x0; } x2; })a0;
- (id)cellsBySplittingCellIntoTriangles;
- (id)initWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> *x0; struct segment_data<double> *x1; struct __compressed_pair<boost::polygon::segment_data<double> *, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> *x0; } x2; })a0;

@end
