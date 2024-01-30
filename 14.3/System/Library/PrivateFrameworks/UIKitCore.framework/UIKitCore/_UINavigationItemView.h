@class UINavigationItem, UILabel, UIView;

@interface _UINavigationItemView : UIView {
    UINavigationItem *_item;
    struct CGSize { double width; double height; } _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    UILabel *_label;
}

@property (nonatomic, setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha;

- (id)navigationItem;
- (id)font;
- (void).cxx_destruct;
- (void)_updateLabel;
- (void)setFont:(id)a0;
- (double)_titleYAdjustmentCustomization;
- (struct CGSize { double x0; double x1; })_titleSize;
- (id)initWithNavigationItem:(id)a0;
- (id)_defaultFont;
- (void)_setFont:(id)a0;
- (id)_currentTextColorForBarStyle:(long long)a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (void)layoutSubviews;
- (void)_resetTitleSize;
- (void)_updateLabelContents;
- (void)_cleanUpCrossView;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_crossFadeHiddingButton:(BOOL)a0;
- (void)_setLineBreakMode:(long long)a0;
- (void)_updateLabelColor;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (id)title;
- (void)setTitleAutoresizesToFit:(BOOL)a0;
- (BOOL)titleAutoresizesToFit;

@end
