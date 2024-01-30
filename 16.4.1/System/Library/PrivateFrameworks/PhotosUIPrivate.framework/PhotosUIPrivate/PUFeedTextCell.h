@class UIImageView, UIImage, UILabel, NSAttributedString, UIButton;

@interface PUFeedTextCell : PUFeedCell

@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel;
@property (retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView;
@property (retain, nonatomic, setter=_setButton:) UIButton *_button;
@property (nonatomic) BOOL shouldUseAccessibilityLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long numberOfTextLines;
@property (nonatomic) double textDetailTextSpacing;
@property (retain, nonatomic) NSAttributedString *attributedDetailText;
@property (nonatomic) long long numberOfDetailTextLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) long long iconLocation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iconPadding;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } iconOffset;
@property (nonatomic) long long tappableArea;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long buttonSize;
@property (nonatomic) long long buttonHorizontalAlignment;
@property (nonatomic) double buttonPadding;
@property (nonatomic) BOOL shouldUseOpaqueBackground;

- (id)_delegate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_iconSize;
- (void)_handleButton:(id)a0;
- (void)_updateDetailLabel;
- (void)_configureButton:(id)a0 withType:(long long)a1 size:(long long)a2 animated:(BOOL)a3;
- (void)_invalidateCachedTextSizes;
- (id)_labelBackgroundColor;
- (struct CGSize { double x0; double x1; })_maximumPossibleTextSizeForButtonWithType:(long long)a0 size:(long long)a1;
- (struct CGSize { double x0; double x1; })_textSizeForButtonWithType:(long long)a0 size:(long long)a1;
- (void)_updateButtonAnimated:(BOOL)a0;
- (void)_updateIconImageView;
- (void)_updateLabelsBackgroundColor;
- (void)_updateShouldUseAccessibilityLayout;
- (void)setButtonType:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldRecognizerTap:(id)a0;

@end
