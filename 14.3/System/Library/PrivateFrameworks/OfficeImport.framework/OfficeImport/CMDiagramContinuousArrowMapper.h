@interface CMDiagramContinuousArrowMapper : CMDiagramShapeMapper

- (id)fill;
- (id)stroke;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (id)_suggestedBoundsForNodeAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0;

@end
