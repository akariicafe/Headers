@class NSString, NSMutableDictionary, UIActivityIndicatorView;

@interface PXCapsuleButton : UIButton {
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (nonatomic) NSString *maxContentSizeCategory;

- (void)_updateBackgroundColor;
- (void)setSelected:(BOOL)a0;
- (id)_titleFont;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)_updateCornerRadius;
- (id)init;
- (void).cxx_destruct;
- (void)_stateDidChange;
- (void)_invalidateBackgroundColor;
- (void)_invalidateCornerRadius;
- (id)colorForState:(unsigned long long)a0;
- (void)setColor:(id)a0 forState:(unsigned long long)a1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
