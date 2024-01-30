@class WKColorPopover, WKContentView;

@interface WKColorPicker : NSObject <WKFormControl, WKColorMatrixViewDelegate> {
    WKContentView *_view;
    WKColorPopover *_popover;
    struct RetainPtr<UIView> { void *m_ptr; } _colorPicker;
    struct RetainPtr<UIView> { void *m_ptr; } _colorSelectionIndicator;
    struct RetainPtr<CAShapeLayer> { void *m_ptr; } _colorSelectionIndicatorBorder;
    struct RetainPtr<WKColorMatrixView> { void *m_ptr; } _topColorMatrix;
    struct RetainPtr<WKColorMatrixView> { void *m_ptr; } _mainColorMatrix;
    struct WeakObjCPtr<WKColorButton> { id m_weakReference; } _selectedColorButton;
    struct RetainPtr<UIPanGestureRecognizer> { void *m_ptr; } _colorPanGR;
}

+ (id)defaultTopColorMatrix;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id).cxx_construct;
- (void)didPanColors:(id)a0;
- (id)initWithView:(id)a0 inPopover:(id)a1;
- (void)colorMatrixViewDidLayoutSubviews:(id)a0;
- (void)colorMatrixView:(id)a0 didTapColorButton:(id)a1;
- (void)drawSelectionIndicatorForColorButton:(id)a0;
- (void)setControlValueFromUIColor:(id)a0;

@end
