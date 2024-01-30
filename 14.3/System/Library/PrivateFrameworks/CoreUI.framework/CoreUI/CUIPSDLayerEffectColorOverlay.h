@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent

@property int blendMode;
@property (retain) CUIColor *color;
@property double opacity;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned int)effectType;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;

@end
