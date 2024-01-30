@class UISlider, UIImageView;

@interface SSVellumOpacityControl : UIControl {
    UISlider *_slider;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}

@property (nonatomic) double value;

+ (double)preferredWidth;

- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)layoutSubviews;
- (id)_rightImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_leftImageView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
