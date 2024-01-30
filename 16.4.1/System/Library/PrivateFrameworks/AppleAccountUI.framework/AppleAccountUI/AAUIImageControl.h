@class UIImageView, AAUILabel, UIView;

@interface AAUIImageControl : UIControl {
    UIView *_overlayView;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AAUILabel *label;

- (id)initWithCoder:(id)a0;
- (void)_updateLabelVisibility;
- (void)_updateOverlayViewVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
