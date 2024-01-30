@interface GVVerticalRank : GVRank

- (double)width;
- (double)height;
- (id)initWithSeparation:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForDummy;
- (void)centerNodesWithRespectoTo:(id)a0;
- (void)centerNode:(id)a0 at:(double)a1;

@end
