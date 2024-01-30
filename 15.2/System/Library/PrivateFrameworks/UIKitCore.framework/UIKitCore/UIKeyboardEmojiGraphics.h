@interface UIKeyboardEmojiGraphics : NSObject

+ (id)sharedInstance;
+ (struct CGPoint { double x0; double x1; })margin:(BOOL)a0;
+ (struct CGPoint { double x0; double x1; })padding:(BOOL)a0;
+ (BOOL)boldText;
+ (unsigned char)colCount:(BOOL)a0;
+ (unsigned char)rowCount:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })emojiSize:(BOOL)a0;
+ (id)emojiCategoryImagePath:(id)a0 forRenderConfig:(id)a1;
+ (BOOL)isWildcatKeyboard;
+ (id)emojiFontAttributesForPortrait:(BOOL)a0;
+ (id)emojiFontAttributes;
+ (double)recentLableVerticalPadding:(BOOL)a0;
+ (double)optionalDescriptionPadding:(BOOL)a0;
+ (double)emojiPageControlYOffset:(BOOL)a0;

- (id)init;

@end
