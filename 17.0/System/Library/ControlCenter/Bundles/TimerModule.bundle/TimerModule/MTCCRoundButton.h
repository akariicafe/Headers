@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface MTCCRoundButton : UIControl

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *normalStateBackgroundView;
@property (retain, nonatomic) UIView *selectedStateBackgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *containerView;

- (id)init;
- (void)dealloc;
- (void)_updateForStateChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCornerRadius;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleContentSizeChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)_touchDown:(id)a0;
- (void)_touchUpInside:(id)a0;
- (void)_dragEnter:(id)a0;
- (void)_dragExit:(id)a0;
- (void)_touchUpOutside:(id)a0;
- (void)setBackgroundMaterialView:(id)a0 forState:(unsigned long long)a1;

@end
