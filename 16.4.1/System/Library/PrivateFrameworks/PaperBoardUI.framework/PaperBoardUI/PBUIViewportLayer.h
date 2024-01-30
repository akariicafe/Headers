@class CALayer;

@interface PBUIViewportLayer : CALayer

@property (readonly, nonatomic) CALayer *contentLayer;
@property (nonatomic) double scale;

- (id)initWithScale:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)animationForKey:(id)a0;

@end
