@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent

@property unsigned long long blurSize;
@property unsigned long long softenSize;
@property short angle;
@property unsigned long long altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor *highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor *shadowColor;
@property double shadowOpacity;

- (id)description;
- (unsigned int)effectType;
- (id)init;
- (void)dealloc;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;

@end
