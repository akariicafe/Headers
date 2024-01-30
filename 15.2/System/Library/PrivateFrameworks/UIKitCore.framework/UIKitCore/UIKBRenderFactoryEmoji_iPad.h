@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone

- (long long)assetIdiom;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)a0;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;

@end
