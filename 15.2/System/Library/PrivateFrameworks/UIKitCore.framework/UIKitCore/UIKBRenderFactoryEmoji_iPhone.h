@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji

- (long long)assetIdiom;
- (id)traitsHashStringForKey:(id)a0 withGeometry:(id)a1 withSymbolStyle:(id)a2 controlOpacities:(BOOL)a3 blurBlending:(BOOL)a4;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)a0;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;

@end
