@interface OBTrayButton : UIButton

@property (nonatomic) double lastTitleLabelHeight;

+ (id)buttonWithType:(long long)a0;
+ (double)standardHeight;

- (id)buttonFont;
- (void)traitCollectionDidChange:(id)a0;
- (id)_fontTextStyle;

@end
