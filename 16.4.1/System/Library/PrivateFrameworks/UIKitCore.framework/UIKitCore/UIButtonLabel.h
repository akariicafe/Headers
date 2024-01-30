@class UIButton;

@interface UIButtonLabel : UILabel {
    BOOL _reverseShadow;
    UIButton *_button;
    BOOL _externallySetNumberOfLines;
}

@property (readonly, nonatomic) BOOL _fontIsDefaultForIdiom;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_textColorFollowsTintColor;
- (void)setFont:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)setReverseShadow:(BOOL)a0;
- (struct CGSize { double x0; double x1; })shadowOffset;
- (void)_setFont:(id)a0 isDefaultForIdiom:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_paddingForBaselineSpacingFromEdge:(int)a0 toNeighborEdge:(int)a1;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (void)_setWantsAutolayout;
- (void)_contentDidChange:(long long)a0 fromContent:(id)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;
- (void).cxx_destruct;
- (void)_internallySetNumberOfLines:(long long)a0;

@end
