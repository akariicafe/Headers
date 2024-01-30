@class UIImageView, UILabel;

@interface DBSNativeDisplayIconView : UIView

@property (nonatomic) BOOL isCurrentDisplayLocation;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *nameField;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayName:(id)a1;

@end
