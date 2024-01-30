@interface OBHeaderAccessoryButton : UIButton

@property (nonatomic) BOOL underlineLinks;

+ (id)buttonWithType:(long long)a0;
+ (id)accessoryButton;

- (void)_updateText;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (id)_fontTextStyle;

@end
