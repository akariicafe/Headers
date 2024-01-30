@interface CCVegaTextMarkDef : CCVegaMarkDef

+ (struct CGPoint { double x0; double x1; })anchorPoint:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForMark:(id)a0 layer:(id)a1;
- (id)enterMark:(id)a0;
- (id)updateMark:(id)a0;
- (id)updateTextLayer:(id)a0 withMark:(id)a1;

@end
