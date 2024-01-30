@interface NAToolbarIssueCoverButton : UIButton {
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ highlightView;
    void /* unknown type, empty encoding */ highlightColor;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

+ (void)updateBarButtonItemWidth:(id)a0 in:(id)a1;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isHighlighted;

@end
