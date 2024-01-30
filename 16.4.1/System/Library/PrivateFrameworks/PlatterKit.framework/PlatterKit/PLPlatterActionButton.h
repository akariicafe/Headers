@class UIFont, NSString, UIView, BSUIFontProvider, MTVisualStylingProvider, MTMaterialView, UILabel, UIColor;

@interface PLPlatterActionButton : UIControl <PLContentSizeCategoryAdjusting, MTMaterialGrouping> {
    UIView *_backgroundTintColoringView;
}

@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *titleLabelVisualStylingProvider;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (copy, nonatomic) UIColor *backgroundTintColor;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)_configureBackgroundViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutTitleLabel;
- (void)_updateTitleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureTitleLabelIfNecessary;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_layoutBackgroundView;
- (void)_configureBackgroundColoringViewIfNecessary;
- (void)_configureTitleLabelEffects;
- (void)_handleHoverGestureRecognizerEvent:(id)a0;
- (long long)_wordCountForText:(id)a0;

@end
