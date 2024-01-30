@class CALayer;

@interface SHListeningOuterCircleLayer : SHPaletteLayer

@property (retain, nonatomic) CALayer *circleContainerLayer;
@property (retain, nonatomic) CALayer *circleLayer;

- (void)setup;
- (void).cxx_destruct;
- (void)layoutSublayers;

@end
