@interface CMDiagramContinuousArrowMapper : CMDiagramShapeMapper

- (id)fill;
- (id)stroke;
- (id)_suggestedBoundsForNodeAtIndex:(long long)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0;

@end
