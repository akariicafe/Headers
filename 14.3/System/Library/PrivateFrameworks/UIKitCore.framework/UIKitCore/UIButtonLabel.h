@class UIButton;

@interface UIButtonLabel : UILabel {
    BOOL _reverseShadow;
    UIButton *_button;
    BOOL _externallySetNumberOfLines;
}

@property (readonly, nonatomic) BOOL _fontIsDefaultForIdiom;

- (void)setShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (void)setNumberOfLines:(long long)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;
- (void)setReverseShadow:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (struct CGSize { double x0; double x1; })shadowOffset;
- (void)setFont:(id)a0;
- (void)_setWantsAutolayout;
- (void)_setFont:(id)a0 isDefaultForIdiom:(BOOL)a1;
- (double)_paddingForBaselineSpacingFromEdge:(int)a0 toNeighborEdge:(int)a1;
- (void)_contentDidChange:(long long)a0 fromContent:(id)a1;
- (BOOL)_textColorFollowsTintColor;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (void)_internallySetNumberOfLines:(long long)a0;

@end
