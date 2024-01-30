@interface ASVHitTestStrategy : ASVHitTestHistory

- (id)decisionForHitTestOfType:(id)a0 atScreenPoint:(SEL)a1 inFrame:(long long)a2 withViewportSize:(id)a3 assetPosition:(struct CGSize { double x0; double x1; })a4 maxDistance:(float)a5;
- (id)decisionForHitTestOfType:(id)a0 atScreenPoint:(SEL)a1 inSession:(long long)a2 withViewportSize:(id)a3 assetPosition:(struct CGSize { double x0; double x1; })a4 maxDistance:(float)a5;

@end
