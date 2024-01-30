@interface SeymourUI.ModernButton : UIButton {
    void /* unknown type, empty encoding */ handlersForControlEvents;
}

- (id)initWithCoder:(id)a0;
- (void)touchDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchDragEnter:(id)a0;
- (void)touchDragExit:(id)a0;
- (void)touchUpInside:(id)a0;
- (void)touchUpOutside:(id)a0;
- (void)touchCancel:(id)a0;
- (void)touchDownRepeat:(id)a0;
- (void)touchDragInside:(id)a0;
- (void)touchDragOutside:(id)a0;

@end
