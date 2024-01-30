@class NSArray;

@interface TSDGPUVoronoiTriangleData : NSObject {
    unsigned long long *_triangleIndexToCellIndexMappingTable;
    unsigned long long *_triangleIndexToCellTriangleIndexMappingTable;
    unsigned long long _triangleIndexToCellMappingTableCount;
}

@property (readonly, nonatomic) unsigned long long triangleCount;
@property (readonly, nonatomic) NSArray *cells;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (void)dealloc;
- (id)cellFromTriangleIndex:(unsigned long long)a0;
- (unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)a0;
- (id)initWithPoints:(unsigned long long)a0 clippedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 percentOfCellsToSplit:(double)a2 randomGenerator:(id)a3;
- (void)p_setupDataWithPointCount:(unsigned long long)a0 clippedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 percentOfCellsToSplit:(double)a2 randomGenerator:(id)a3;
- (unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)a0;

@end
