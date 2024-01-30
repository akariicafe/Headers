@class NSUUID, NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject {
    NSMutableDictionary *_animationsByParameters;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;

- (void)addAnimation:(id)a0;
- (void)iterateAnimationsOfType:(Class)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)iterateAnimationsWithBlock:(id /* block */)a0;

@end
