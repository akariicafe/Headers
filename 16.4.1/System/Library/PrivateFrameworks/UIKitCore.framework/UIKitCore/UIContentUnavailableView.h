@class NSString, UIImageView, UIActivityIndicatorView, UILabel, UIContentUnavailableConfiguration, UIButton;

@interface UIContentUnavailableView : UIView <UIContentView> {
    double _preferredMaxLayoutWidth;
    BOOL _isEmbeddedInWrapperView;
}

@property (readonly, nonatomic, getter=_imageView) UIImageView *imageView;
@property (readonly, nonatomic, getter=_textLabel) UILabel *textLabel;
@property (readonly, nonatomic, getter=_secondaryTextLabel) UILabel *secondaryTextLabel;
@property (readonly, nonatomic, getter=_button) UIButton *button;
@property (readonly, nonatomic, getter=_secondaryButton) UIButton *secondaryButton;
@property (readonly, nonatomic, getter=_activityIndicator) UIActivityIndicatorView *activityIndicator;
@property (copy, nonatomic) UIContentUnavailableConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setMultilineContextWidth:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (double)_multilineContextWidth;
- (id)_encodableSubviews;
- (void)_checkWhetherEmbeddedInWrapperView;
- (id)initWithCoder:(id)a0;
- (void)_computeLayoutInfoForLabel:(id)a0 info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a1 restrictedToSize:(struct CGSize { double x0; double x1; } *)a2 cumulativeSize:(struct CGSize { double x0; double x1; } *)a3;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_applyConfiguration:(id)a0;
- (BOOL)supportsConfiguration:(id)a0;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; unsigned long long x6; struct CGSize { double x0; double x1; } x7; })_computeLayoutInfoRestrictedToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_computeLayoutInfoForView:(id)a0 info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a1 restrictedToSize:(struct CGSize { double x0; double x1; } *)a2 cumulativeSize:(struct CGSize { double x0; double x1; } *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (id)initWithConfiguration:(id)a0;
- (double)_preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (void)_computeLayoutInfoForButton:(id)a0 info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a1 secondaryButton:(id)a2 secondaryInfo:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a3 axis:(unsigned long long)a4 restrictedToSize:(struct CGSize { double x0; double x1; } *)a5 cumulativeSize:(struct CGSize { double x0; double x1; } *)a6;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultInsetsForView:(id)a0;

@end
