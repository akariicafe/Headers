@class CALayer, CAShapeLayer;

@interface SHTaggingViewAutoShadowLayer : CALayer

@property (retain, nonatomic) CALayer *autoShadowBackgroundLayer;
@property (retain, nonatomic) CAShapeLayer *autoShadowOuterLayer;

- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setupSublayers;

@end
