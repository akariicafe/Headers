@class CALayer, CAShapeLayer;

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain, nonatomic) CALayer *autoShadowBackgroundLayer;
@property (retain, nonatomic) CAShapeLayer *autoShadowOuterLayer;

- (void)setup;
- (void).cxx_destruct;
- (void)layoutSublayers;

@end
