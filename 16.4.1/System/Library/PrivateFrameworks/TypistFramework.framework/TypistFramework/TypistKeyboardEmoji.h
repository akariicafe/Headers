@interface TypistKeyboardEmoji : TypistKeyboard

+ (id)findEmojiScrollView;
+ (void)resetSelectedCategory;
+ (BOOL)scrollEmojiKeyboard;

- (void)preprocessing;
- (id)generateKeystrokeStream:(id)a0;
- (id)init:(id)a0 options:(id)a1;

@end
