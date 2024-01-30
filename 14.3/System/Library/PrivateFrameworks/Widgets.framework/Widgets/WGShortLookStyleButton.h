@class NSString, UILabel, BSUIFontProvider, MTMaterialView;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    BSUIFontProvider *_fontProvider;
    struct CGSize { double width; double height; } _size;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateHighlight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_configureTitleLabelIfNecessary;
- (void)invalidateCachedGeometry;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateTouchInsetsIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (id)fontForTitle:(id)a0;
- (void)layoutSubviews;
- (id)_fontProvider;
- (void)_updateTitleLabelFont;
- (double)_backgroundViewCornerRadius;
- (struct CGSize { double x0; double x1; })_size;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_layoutTitleLabel;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureMaskIfNecessary;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setBackgroundViewCornerRadius:(double)a0;

@end
