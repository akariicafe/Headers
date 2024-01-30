@interface APUITrayButton : UIButton

+ (double)standardHeight;
+ (id)buttonWithType:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)_buttonFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)_fontTextStyle;

@end
