@class CUIShapeEffectPreset;

@interface _CUIThemeEffectRendition : CUIThemeRendition {
    const struct _cuieffectdata { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct _cuieffectlist { unsigned int x0; unsigned int x1[0]; } x4; } *effectData;
    CUIShapeEffectPreset *_effectPreset;
    float _minimumShadowSpread;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (void)_setStructuredThemeStore:(id)a0;
- (id)effectPreset;

@end
