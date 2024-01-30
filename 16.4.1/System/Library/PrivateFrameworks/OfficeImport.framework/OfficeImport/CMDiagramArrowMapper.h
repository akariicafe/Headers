@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
    BOOL mIsVertical;
    BOOL mIsOutward;
    float mRadius;
}

+ (void)initialize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circumscribedBounds;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 identifier:(id)a3 parent:(id)a4;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })textSizeForShapeSize:(struct CGSize { double x0; double x1; })a0;

@end
