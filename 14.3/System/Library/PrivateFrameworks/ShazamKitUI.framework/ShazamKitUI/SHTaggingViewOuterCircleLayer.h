@class CALayer;

@interface SHTaggingViewOuterCircleLayer : CALayer

@property (retain, nonatomic) CALayer *circleContainerLayer;
@property (retain, nonatomic) CALayer *circleLayer;

- (void)setup;
- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
