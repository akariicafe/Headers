@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property short angle;
@property unsigned long long distance;
@property unsigned long long blurSize;
@property unsigned long long spread;

- (id)init;
- (void)dealloc;
- (unsigned int)effectType;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;

@end
