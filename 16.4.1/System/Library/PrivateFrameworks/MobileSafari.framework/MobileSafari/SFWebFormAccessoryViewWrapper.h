@class UIView;

@interface SFWebFormAccessoryViewWrapper : UIView {
    UIView *_webFormAccessoryView;
}

@property (nonatomic) double bottomBarHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithWebFormAccessoryView:(id)a0 bottomBarHeight:(double)a1;

@end
