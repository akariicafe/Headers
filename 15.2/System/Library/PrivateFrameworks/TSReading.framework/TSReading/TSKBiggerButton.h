@interface TSKBiggerButton : UIButton {
    BOOL mHitTestWithOutsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } mOutsets;
}

+ (id)tsdPlatformButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHitBufferTop:(double)a0 left:(double)a1 bottom:(double)a2 right:(double)a3;

@end
