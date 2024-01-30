@class LPContactsBadgeStyle, UIImageView, CAShapeLayer, UIView, CNAvatarView;

@interface LPContactsBadgeView : LPComponentView {
    LPContactsBadgeStyle *_style;
    CNAvatarView *_avatarView;
    UIImageView *_highlightIndicatorView;
    UIView *_highlightShadowView;
    CAShapeLayer *_maskLayer;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 contacts:(id)a1 highlighted:(BOOL)a2 style:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutExclusionRect;

@end
