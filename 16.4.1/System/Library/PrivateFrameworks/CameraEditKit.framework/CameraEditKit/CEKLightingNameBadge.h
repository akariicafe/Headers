@class UIView;

@interface CEKLightingNameBadge : CEKBadgeTextView

@property (retain, nonatomic, setter=_setSnapshotView:) UIView *_snapshotView;
@property (nonatomic) long long lightingType;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)_updateText;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateColorsAnimated:(BOOL)a0;

@end
