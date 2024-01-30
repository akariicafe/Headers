@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory *_overlayFactory;
}

- (double)popupFontSize;
- (struct CGPoint { double x0; double x1; })variantSymbolTextOffset;
- (BOOL)isTallPopup;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantSymbolFrameInsets;
- (id)initWithRenderingContext:(id)a0 skipLayoutSegments:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })popupSymbolTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPopupMenuInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (Class)_overlayFactoryClass;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantPaddedFrameInsets;

@end
