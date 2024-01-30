@class UIView;

@interface TouchExclusionView : UIView {
    UIView *_excludingView;
}

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 excludingView:(id)a1;

@end
