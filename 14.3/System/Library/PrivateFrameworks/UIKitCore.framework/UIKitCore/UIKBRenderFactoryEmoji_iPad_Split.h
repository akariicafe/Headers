@interface UIKBRenderFactoryEmoji_iPad_Split : UIKBRenderFactory_Emoji

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)a0;
- (id)thinKeycapsFontName;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (id)lightKeycapsFontName;

@end
