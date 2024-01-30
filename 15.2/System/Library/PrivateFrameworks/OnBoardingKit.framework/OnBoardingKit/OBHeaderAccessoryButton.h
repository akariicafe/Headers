@interface OBHeaderAccessoryButton : UIButton

@property (nonatomic) BOOL underlineLinks;

+ (id)accessoryButton;
+ (id)buttonWithType:(long long)a0;

- (void)_updateText;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)_fontTextStyle;

@end
