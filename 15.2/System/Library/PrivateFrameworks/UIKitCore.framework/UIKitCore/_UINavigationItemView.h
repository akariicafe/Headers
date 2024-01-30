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

- (void)setFont:(id)a0;
- (void)layoutSubviews;
- (void)_updateLabel;
- (id)title;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_titleSize;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)traitCollectionDidChange:(id)a0;
- (double)_titleYAdjustmentCustomization;
- (void)_setFont:(id)a0;
- (id)_defaultFont;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resetTitleSize;
- (id)font;
- (void)_updateLabelColor;
- (void)_crossFadeHiddingButton:(BOOL)a0;
- (void)_cleanUpCrossView;
- (void)setTitleAutoresizesToFit:(BOOL)a0;
- (void)_updateLabelContents;
- (BOOL)titleAutoresizesToFit;
- (void)_setLineBreakMode:(long long)a0;
- (id)initWithNavigationItem:(id)a0;
- (id)_currentTextColorForBarStyle:(long long)a0;

@end
