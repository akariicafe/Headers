@interface _AppIntents_UIKit.ShortcutsUIButton : UIButton {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ buttonTapHandler;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
