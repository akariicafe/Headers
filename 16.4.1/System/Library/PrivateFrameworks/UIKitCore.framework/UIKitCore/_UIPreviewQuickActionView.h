@class UIImageView, UILabel, UIPreviewAction;

@interface _UIPreviewQuickActionView : UIView

@property (weak, nonatomic) UIImageView *backgroundViewImage;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UILabel *label;
@property (retain, nonatomic) UIPreviewAction *quickAction;
@property (nonatomic) BOOL selected;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateCircleBackgroundImage;
- (id)centerYAnchor;
- (void)updateFromQuickAction;

@end
