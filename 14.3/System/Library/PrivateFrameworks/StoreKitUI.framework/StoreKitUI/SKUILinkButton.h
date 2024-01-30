@interface SKUILinkButton : UIButton

@property (readonly, nonatomic) long long arrowStyle;

+ (id)buttonWithArrowStyle:(long long)a0;

- (void)tintColorDidChange;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithArrowStyle:(long long)a0;
- (void)_reloadIcons;
- (double)_linkImagePaddingLeft;

@end
