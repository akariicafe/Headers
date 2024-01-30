@interface SBSceneLayoutWindow : SBWindow

+ (BOOL)sb_autorotates;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_layoutController;
- (id)referenceCoordinateSpace;
- (id)layoutCoordinateSpace;

@end
