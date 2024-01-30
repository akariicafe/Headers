@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper

- (unsigned long long)pointCount;
- (unsigned long long)layerCount;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned long long)a0 inLayer:(unsigned long long)a1 andSlice:(unsigned long long)a2;

@end
