@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
    float mScale;
    BOOL mCircularArrows;
    int mDiagramType;
    int mArrowShapeType;
}

- (struct CGSize { double x0; double x1; })nodeSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circumscribedBounds;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 identifier:(id)a3 parent:(id)a4;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (void)mapTransitionArrowsAt:(id)a0 index:(unsigned int)a1 withState:(id)a2;
- (void)mapTransitionPointAt:(id)a0 index:(unsigned int)a1 withState:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nodeBoundsWithIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;

@end
