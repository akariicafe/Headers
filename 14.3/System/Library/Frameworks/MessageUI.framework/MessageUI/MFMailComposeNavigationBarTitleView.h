@class NSString, UILabel;

@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    unsigned long long _style;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)layoutMarginsDidChange;
- (void)contentDidChange;
- (void)_updateTrailingBarButtonItemsAlpha;
- (void)_updateHeightForCurrentTraits;
- (void).cxx_destruct;
- (double)_verticalOffsetForSubtitleWhenMini:(BOOL)a0;
- (BOOL)_needsToLayoutTitleLabel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsWithExclusionRects:(id)a0 wantsUniformHorizontalInsets:(BOOL)a1;
- (void)didMoveToWindow;
- (double)_titleFontSizeWhenMini:(BOOL)a0;
- (double)_subtitleFontSizeWhenMini:(BOOL)a0;
- (void)layoutSubviews;
- (id)_subtitleTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSubtitle:(id)a0 withStyle:(unsigned long long)a1;
- (double)_topPaddingForTitleWhenMini:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
