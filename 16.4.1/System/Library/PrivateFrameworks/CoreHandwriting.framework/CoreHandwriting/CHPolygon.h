@interface CHPolygon : NSObject

@property (nonatomic) double area;
@property (readonly, nonatomic) long long vertexCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } *vertices;

+ (struct CGPoint { double x0; double x1; } *)_createClippedPolygonForPolygon:(id)a0 clippingLine:(struct CHLineSegment { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a1 clippedPolygonVertexCount:(long long *)a2;
+ (id)_sutherlandHodgmanClipForSubjectPolygon:(id)a0 usingClipPolygon:(id)a1;

- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithVertices:(struct CGPoint { double x0; double x1; } *)a0 vertexCount:(long long)a1;
- (long long)edgeCountIntersectingLineSegment:(struct CHLineSegment { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a0;
- (id)polygonByIntersectingWithClipPolygon:(id)a0;
- (id)polygonDrawing;

@end
