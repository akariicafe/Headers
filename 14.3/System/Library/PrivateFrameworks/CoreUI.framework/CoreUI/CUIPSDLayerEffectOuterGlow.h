@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property unsigned long long blurSize;
@property unsigned long long spread;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned int)effectType;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;

@end
