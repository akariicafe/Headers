@class UIView, IKViewElement, VUIButtonLayout, NSString, VUILabel, UILargeContentViewerInteraction, _TVImageView, UIColor;

@interface VUILegacyButton : UIControl <UIPointerInteractionDelegate, VUILabelBaselineProtocol>

@property (retain, nonatomic) VUIButtonLayout *layout;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) UILargeContentViewerInteraction *largeContentViewerInteraction;
@property (nonatomic) BOOL isTintColorAndBackgroundColorSaturated;
@property (retain, nonatomic) _TVImageView *imagesViewDefaultState;
@property (retain, nonatomic) _TVImageView *imagesViewHighlightedState;
@property (retain, nonatomic) _TVImageView *backgroundImagesViewDefaultState;
@property (retain, nonatomic) _TVImageView *backgroundImagesViewHighlightedState;
@property (retain, nonatomic) _TVImageView *backgroundImageView;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL hasDisclaimerText;
@property (nonatomic) BOOL imageTrailsTextContent;
@property (copy, nonatomic) VUILabel *textContentView;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) id /* block */ selectActionHandler;
@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTintColor:(id)a0;
- (void)_updateLayout;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)largeContentImage;
- (void)setCornerRadius:(double)a0;
- (double)baselineOffsetFromBottom;
- (BOOL)_hasTitle;
- (id)largeContentTitle;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)prepareForReuse;
- (BOOL)_hasImage;
- (void)_updateBackgroundColor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)scalesLargeContentImage;
- (void)_buttonTapped:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_hasBackgroundImage;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)updateWithElement:(id)a0;
- (void)revertTintColor;
- (struct CGSize { double x0; double x1; })_imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithLayout:(id)a0 interfaceStyle:(long long)a1;
- (void)setImageView:(id)a0 state:(unsigned long long)a1;
- (void)saturateTintColorAndBackgroundColor;
- (struct CGPoint { double x0; double x1; })_centerWithViewSize:(struct CGSize { double x0; double x1; })a0 withParentSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pointerShapeRect;
- (void)setBackgroundImage:(id)a0 state:(unsigned long long)a1;
- (void)_configureWithLayout:(id)a0;

@end
