@class UIImageView, UITableViewCell;

@interface UITableViewCellReorderControl : UIControl {
    UITableViewCell *_cell;
    struct CGPoint { double x; double y; } _downPoint;
    double _focalY;
    double _focalHeight;
    UIImageView *_imageView;
}

@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)_imageView;
- (void).cxx_destruct;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithTableViewCell:(id)a0;
- (id)grabberImage;
- (BOOL)shouldTrack;
- (void)layoutSubviews;
- (void)_updateImageView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
