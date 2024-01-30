@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory *_overlayFactory;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantSymbolFrameInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantPaddedFrameInsets;
- (struct CGPoint { double x0; double x1; })variantSymbolTextOffset;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (BOOL)isTallPopup;
- (double)popupFontSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })popupSymbolTextOffset;
- (Class)_overlayFactoryClass;
- (id)initWithRenderingContext:(id)a0 skipLayoutSegments:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPopupMenuInsets;

@end
