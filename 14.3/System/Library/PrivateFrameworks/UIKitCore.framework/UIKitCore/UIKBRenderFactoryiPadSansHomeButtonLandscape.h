@interface UIKBRenderFactoryiPadSansHomeButtonLandscape : UIKBRenderFactoryiPadSansHomeButton

- (double)keyCornerRadius;
- (double)stringKeyFontSize;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (double)bottomRowDefaultFontSize;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (double)fallbackFontSize;
- (double)controlKeyFontSize;
- (struct CGPoint { double x0; double x1; })iPadFudgeControlKeyOffset;
- (double)dualStringKeyBottomFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (struct CGPoint { double x0; double x1; })dualStringKeyTopTextOffset;

@end
