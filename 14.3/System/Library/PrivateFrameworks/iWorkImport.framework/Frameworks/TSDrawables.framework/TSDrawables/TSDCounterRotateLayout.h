@interface TSDCounterRotateLayout : TSDContainerLayout <TSDWrappableParent>

- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)canFlip;
- (id)descendentWrappables;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (id)reliedOnLayouts;
- (id)visibleGeometries;
- (BOOL)descendentWrappablesContainsWrappable:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
