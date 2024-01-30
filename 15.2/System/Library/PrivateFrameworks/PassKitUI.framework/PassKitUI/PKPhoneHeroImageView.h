@class UIImageView;

@interface PKPhoneHeroImageView : UIView {
    UIImageView *_phoneView;
}

- (void)layoutSubviews;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setContentMode:(long long)a0;
- (void).cxx_destruct;

@end
