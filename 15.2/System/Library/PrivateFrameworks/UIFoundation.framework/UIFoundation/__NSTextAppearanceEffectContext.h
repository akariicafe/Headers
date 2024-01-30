@class UIFont, NSString, CUIStyleEffectConfiguration, CUICatalog, UIColor;

@interface __NSTextAppearanceEffectContext : NSObject {
    NSString *_effectName;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_effectConfiguration;
    UIFont *_font;
    UIColor *_color;
}

- (void)drawGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(long long)a2 context:(struct CGContext { } *)a3;
- (void)dealloc;
- (id)initWithTextEffectName:(id)a0 catalog:(id)a1 styleEffectConfiguration:(id)a2 font:(id)a3 color:(id)a4 applicationFrameworkContext:(long long)a5 useSimplifiedEffect:(BOOL)a6;

@end
