@class UISlider, UIImageView;

@interface SSVellumOpacityControl : UIControl {
    UISlider *_slider;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}

@property (nonatomic) double value;

+ (double)preferredWidth;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_rightImageView;
- (id)_leftImageView;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
