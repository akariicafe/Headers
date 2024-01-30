@interface HPSSpatialProfileCrossHairs : BKUIPearlCrossHairsView

- (void)nudgeInDirection:(unsigned long long)a0 smallNudgePeak:(id /* block */)a1 largeNudgePeak:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)nudgeCustomDirection:(unsigned long long)a0 completion:(id /* block */)a1;

@end
