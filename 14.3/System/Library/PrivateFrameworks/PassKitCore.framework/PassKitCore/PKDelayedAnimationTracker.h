@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject

@property (readonly, weak, nonatomic) CALayer *layer;
@property (readonly, copy, nonatomic) NSString *key;
@property (copy, nonatomic) id /* block */ removalAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0 key:(id)a1;
- (void)removeAnimationIfPossible;

@end
