@class CALayer, CAAnimation, NSString;

@interface _UIStatusBarCycleLayerAnimation : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) CAAnimation *animation;
@property (retain, nonatomic) CAAnimation *originalAnimation;
@property (copy, nonatomic) NSString *key;

+ (id)cycleAnimationWithLayer:(id)a0 animation:(id)a1 key:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
