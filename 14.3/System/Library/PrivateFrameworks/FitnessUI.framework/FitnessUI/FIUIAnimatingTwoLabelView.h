@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView {
    UILabel *_visibleLabel;
}

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (readonly, nonatomic) UILabel *visibleLabel;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mainLabel:(id)a1 secondaryLabel:(id)a2;
- (void)applyFont:(id)a0;
- (void)showMainLabelAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameAboveBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameBelowBounds;
- (void)_updateHidden;
- (void)showSecondaryLabelAnimated:(BOOL)a0;

@end
