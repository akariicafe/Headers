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

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_imageView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)grabberImage;
- (id)initWithTableViewCell:(id)a0;
- (BOOL)shouldTrack;

@end
