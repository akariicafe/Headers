@class NSUUID, NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject {
    NSMutableDictionary *_animationsByParameters;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;

- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0;
- (void)iterateAnimationsWithBlock:(id /* block */)a0;
- (void)iterateAnimationsOfType:(Class)a0 withBlock:(id /* block */)a1;

@end
