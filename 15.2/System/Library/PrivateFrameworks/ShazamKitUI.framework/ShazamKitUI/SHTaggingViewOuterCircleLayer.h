@class CALayer;

@interface SHTaggingViewOuterCircleLayer : CALayer

@property (retain, nonatomic) CALayer *circleContainerLayer;
@property (retain, nonatomic) CALayer *circleLayer;

- (void)layoutSublayers;
- (void)setup;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
