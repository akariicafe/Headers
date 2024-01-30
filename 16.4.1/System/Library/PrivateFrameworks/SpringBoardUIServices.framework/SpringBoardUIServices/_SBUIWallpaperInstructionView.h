@class UIImageView, UILabel;

@interface _SBUIWallpaperInstructionView : UIView {
    UIImageView *_imageView;
    UILabel *_textLabel;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTintColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 text:(id)a1 font:(id)a2;

@end
