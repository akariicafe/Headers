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
- (void)calculateFrameValues:(id)a0 frameTimes:(id)a1 withFrameInterval:(double)a2 valueTransformer:(id /* block */)a3;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (id)_animationFrames;
- (void)addAnimationFrameForValue:(id)a0;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;

@end
