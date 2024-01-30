@interface UIKBRenderFactoryiPadSansHomeButton : UIKBRenderFactoryiPad

- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2;
- (BOOL)_displaysAsControlKeyStyle:(id)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)controlKeyFontSize;
- (id)displayContentsForKey:(id)a0;
- (double)dualStringKeyBottomFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyTopTextOffset;
- (struct CGPoint { double x0; double x1; })iPadFudgeControlKeyOffset;
- (BOOL)iPadSansHomeButtonLayout;
- (double)stringKeyFontSize;
- (struct CGPoint { double x0; double x1; })symbolImageControlKeyOffset;

@end
