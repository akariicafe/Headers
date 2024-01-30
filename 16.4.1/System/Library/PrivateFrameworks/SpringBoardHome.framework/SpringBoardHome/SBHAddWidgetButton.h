@class NSString, MTStylingProvidingSolidColorView, UIView, UIPointerInteraction;

@interface SBHAddWidgetButton : UIButton <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
}

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)mt_applyVisualStyling:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_titleLabelFont;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)_buttonCornerRadius;
- (void)mt_removeAllVisualStyling;
- (id)_addSymbolImage;

@end
