@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForNode:(id)a0;
- (void)copyInfoForNode:(id)a0 depth:(int)a1;
- (id)infoForNode:(id)a0;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 identifier:(id)a3 parent:(id)a4;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (void)mapLayerNodes:(id)a0 at:(id)a1 scale:(float)a2 offsetX:(float)a3 offsetY:(float)a4 withState:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapLogicalBoundsWithXRanges:(const void *)a0;
- (void)mapNode:(id)a0 at:(id)a1 scale:(float)a2 offsetX:(float)a3 offsetY:(float)a4 withState:(id)a5;
- (void *)mapRangesForNode:(id)a0;
- (void)setAbsolutePositionOfNode:(id)a0 parentRow:(int)a1 parentXOffset:(float)a2 index:(unsigned long long)a3;
- (void)setUpLayers;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;

@end
