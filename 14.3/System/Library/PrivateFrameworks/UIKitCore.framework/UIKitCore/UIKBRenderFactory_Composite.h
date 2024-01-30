@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory *_overlayFactory;
}

- (BOOL)isTallPopup;
- (struct CGPoint { double x0; double x1; })variantSymbolTextOffset;
- (double)popupFontSize;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantSymbolFrameInsets;
- (struct CGPoint { double x0; double x1; })popupSymbolTextOffset;
- (id)initWithRenderingContext:(id)a0 skipLayoutSegments:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPopupMenuInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantPaddedFrameInsets;
- (Class)_overlayFactoryClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;

@end
