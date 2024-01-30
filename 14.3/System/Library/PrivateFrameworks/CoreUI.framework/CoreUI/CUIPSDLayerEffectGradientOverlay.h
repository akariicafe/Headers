@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent

@property (retain) CUIPSDGradient *gradient;

- (id)init;
- (void)dealloc;
- (unsigned int)effectType;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;

@end
