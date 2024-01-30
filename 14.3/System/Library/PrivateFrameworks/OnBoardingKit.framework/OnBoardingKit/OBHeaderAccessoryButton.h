@interface OBHeaderAccessoryButton : UIButton

+ (id)buttonWithType:(long long)a0;
+ (id)accessoryButton;

- (void)_updateText;
- (id)_fontTextStyle;
- (void)traitCollectionDidChange:(id)a0;

@end
