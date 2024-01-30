@class UIColor, UITableViewCell, UIImageView;

@interface UITableViewCellReorderControl : UIControl {
    UITableViewCell *_cell;
    struct CGPoint { double x; double y; } _downPoint;
    double _focalY;
    double _focalHeight;
    UIImageView *_imageView;
}

@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
@property (retain, nonatomic) UIColor *accessoryTintColor;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_imageView;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithTableViewCell:(id)a0;
- (id)grabberImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)shouldTrack;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImageView;

@end
