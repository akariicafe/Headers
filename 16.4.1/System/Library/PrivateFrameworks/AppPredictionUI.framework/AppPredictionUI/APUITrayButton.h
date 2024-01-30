@interface APUITrayButton : UIButton

+ (id)buttonWithType:(long long)a0;
+ (double)standardHeight;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)_buttonFont;
- (id)_fontTextStyle;

@end
