@interface MNRouteDivergenceFinderBoundingSection : NSObject

@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } range;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingRect;
@property (retain, nonatomic) MNRouteDivergenceFinderBoundingSection *left;
@property (retain, nonatomic) MNRouteDivergenceFinderBoundingSection *right;
@property (readonly, nonatomic) BOOL isLeaf;
@property (nonatomic) unsigned long long leafIndex;
@property (nonatomic) double length;

- (id).cxx_construct;
- (BOOL)containsCoordinate:(struct { double x0; double x1; double x2; })a0;
- (id)description;
- (void).cxx_destruct;
- (id)treeDescription;
- (void)_appendDescription:(id)a0 indent:(unsigned long long)a1;
- (id)boundsDescription;
- (id)leafSectionsIntersectingSection:(id)a0 paddingMapPoints:(double)a1;
- (void)traverseWithHandler:(id /* block */)a0;

@end
