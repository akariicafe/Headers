@protocol NACancelable;

@interface HUEffectiveProgressObserver : NSObject

@property (readonly, copy, nonatomic) id /* block */ observerBlock;
@property (readonly, nonatomic) double targetEffectiveProgress;
@property (retain, nonatomic) id<NACancelable> timerCancellationToken;

- (void).cxx_destruct;
- (id)initWithTargetEffectiveProgress:(double)a0 observerBlock:(id /* block */)a1;

@end
