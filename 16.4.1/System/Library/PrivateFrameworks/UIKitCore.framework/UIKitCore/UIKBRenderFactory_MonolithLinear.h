@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith

- (struct CGSize { double x0; double x1; })pillControlKeyFocusIncreaseSize;
- (id)_enabledTraitsForControlKey:(id)a0;
- (id)_highlightedTraitsForControlKey:(id)a0;
- (void)configureGeometry:(id)a0 forControlKey:(id)a1;
- (void)configureSymbolStyle:(id)a0 forControlKey:(id)a1;
- (BOOL)forceVariantsInsideKeyplane;
- (double)pillControlKeyFontSize;
- (double)pillControlKeyHeight;
- (id)pillControlKeyPillBackgroundColor;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;

@end
