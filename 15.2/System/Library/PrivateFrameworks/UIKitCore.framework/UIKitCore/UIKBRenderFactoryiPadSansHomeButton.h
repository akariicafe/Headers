@interface UIKBRenderFactoryiPadSansHomeButton : UIKBRenderFactoryiPad

- (id)displayContentsForKey:(id)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x0; double x1; })symbolImageControlKeyOffset;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2;
- (BOOL)iPadSansHomeButtonLayout;
- (double)controlKeyFontSize;
- (struct CGPoint { double x0; double x1; })iPadFudgeControlKeyOffset;
- (BOOL)_displaysAsControlKeyStyle:(id)a0;
- (double)dualStringKeyBottomFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyTopTextOffset;

@end
