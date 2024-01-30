@interface TSDContinuousContentPathAnimation : TSDContentAnimation

@property (copy, nonatomic) id /* block */ tick;
@property (copy, nonatomic) id /* block */ isFinished;

- (void)dealloc;
- (void)i_applyToLayer:(id)a0 withTransformBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;

@end
