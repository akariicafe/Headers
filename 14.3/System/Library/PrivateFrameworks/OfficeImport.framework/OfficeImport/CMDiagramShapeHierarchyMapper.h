@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 identifier:(id)a3 parent:(id)a4;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;
- (void)setUpLayers;
- (void)copyInfoForNode:(id)a0 depth:(int)a1;
- (struct ODIHRangeVector { struct ODIHRange *x0; struct ODIHRange *x1; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange *x0; } x2; } *)mapRangesForNode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange *x0; struct ODIHRange *x1; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange *x0; } x2; } *)a0;
- (void)setAbsolutePositionOfNode:(id)a0 parentRow:(int)a1 parentXOffset:(float)a2 index:(unsigned long long)a3;
- (void)mapLayerNodes:(id)a0 at:(id)a1 scale:(float)a2 offsetX:(float)a3 offsetY:(float)a4 withState:(id)a5;
- (void)mapNode:(id)a0 at:(id)a1 scale:(float)a2 offsetX:(float)a3 offsetY:(float)a4 withState:(id)a5;
- (id)infoForNode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForNode:(id)a0;

@end
