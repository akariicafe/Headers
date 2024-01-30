@class UIImageView;

@interface BPSCheckMarkView : UIView

@property (nonatomic) BOOL isChecked;
@property (retain, nonatomic) UIImageView *imageView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)checkedImage;
- (id)uncheckedImage;

@end
