@class CALayer;

@interface PBUIImageContainerLayer : CALayer

@property (retain, nonatomic) CALayer *imageLayer;

+ (id)layer;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)animationForKey:(id)a0;

@end
