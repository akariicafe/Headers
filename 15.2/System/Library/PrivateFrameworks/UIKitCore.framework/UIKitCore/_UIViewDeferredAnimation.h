@class NSString, NSArray;

@interface _UIViewDeferredAnimation : NSObject

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *key;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;
@property (nonatomic) double duration;
@property (retain, nonatomic) id initialValue;
@property (readonly, nonatomic) NSArray *animationFrames;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL autoreverses;

- (void)_finalize;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (id)description;
- (id)_animationFrames;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (void).cxx_destruct;
- (void)calculateFrameValues:(id)a0 frameTimes:(id)a1 withFrameInterval:(double)a2 valueTransformer:(id /* block */)a3;
- (void)addAnimationFrameForValue:(id)a0;

@end
