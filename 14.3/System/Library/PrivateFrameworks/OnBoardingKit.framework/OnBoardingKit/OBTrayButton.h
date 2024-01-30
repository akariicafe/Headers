@interface OBTrayButton : UIButton

+ (double)standardHeight;
+ (id)buttonWithType:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_buttonFont;
- (void)layoutSubviews;
- (id)_fontTextStyle;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
