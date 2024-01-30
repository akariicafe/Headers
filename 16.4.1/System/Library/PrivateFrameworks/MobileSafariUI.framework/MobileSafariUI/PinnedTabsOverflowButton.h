@class UIVisualEffectView;

@interface PinnedTabsOverflowButton : UIButton {
    BOOL _hovering;
    UIVisualEffectView *_trailingSeparator;
}

@property (nonatomic) BOOL showsTrailingSeparator;
@property (nonatomic) long long tintStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_hover:(id)a0;
- (void)_setHovering:(BOOL)a0;

@end
