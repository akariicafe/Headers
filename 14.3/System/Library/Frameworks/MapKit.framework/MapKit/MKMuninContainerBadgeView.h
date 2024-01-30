@class UIImageView, UIVisualEffectView, UILabel;

@interface MKMuninContainerBadgeView : UIView

@property (weak, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) UIImageView *glyphView;
@property (weak, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;

@end
