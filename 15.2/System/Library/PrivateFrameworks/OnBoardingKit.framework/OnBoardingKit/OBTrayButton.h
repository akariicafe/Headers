@interface OBTrayButton : UIButton

@property (nonatomic) double lastTitleLabelHeight;

+ (double)standardHeight;
+ (id)buttonWithType:(long long)a0;

- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (id)_buttonFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)_fontTextStyle;

@end
