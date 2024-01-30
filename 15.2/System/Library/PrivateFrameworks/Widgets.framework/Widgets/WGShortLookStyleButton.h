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
- (void)_layoutTitleLabel;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)_fontProvider;
- (void)_updateTitleLabelFont;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_size;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setBackgroundViewCornerRadius:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)fontForTitle:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureMaskIfNecessary;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)_backgroundViewCornerRadius;
- (void)invalidateCachedGeometry;
- (void)_updateTouchInsetsIfNecessary;

@end
