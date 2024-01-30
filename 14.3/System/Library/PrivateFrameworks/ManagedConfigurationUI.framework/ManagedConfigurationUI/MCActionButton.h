@interface MCActionButton : UIButton {
    int _state;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _area;
}

- (void)_layout;
- (void)setState:(int)a0;
- (void)_animationFinished:(id)a0;
- (void)_cacheImages;
- (id)_titleForConfigState:(int)a0;
- (void)_updateButtonImages:(int)a0 animate:(BOOL)a1;
- (id)initWithConfigState:(int)a0;
- (void)setEnclosingArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
