@class NSString;

@interface ISTransitionApplier : NSObject <CAAnimationDelegate>

@property (class, readonly, nonatomic) ISTransitionApplier *defaultApplier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)_applyAlpha:(double)a0 blurRadius:(double)a1 toLayer:(id)a2 withTransitionOptions:(id)a3 completion:(id /* block */)a4;
- (void)_applyScale:(double)a0 toLayer:(id)a1 withTransitionOptions:(id)a2 completion:(id /* block */)a3;
- (void)applyOutputInfo:(id)a0 withTransitionOptions:(id)a1 toPhotoLayer:(id)a2 videoLayer:(id)a3 completion:(id /* block */)a4;
- (void)applyScale:(double)a0 withTransitionOptions:(id)a1 toPhotoLayer:(id)a2 videoLayer:(id)a3 completion:(id /* block */)a4;
- (void)setValue:(id)a0 forKeyPath:(id)a1 ofLayer:(id)a2 withTransitionOptions:(id)a3 completion:(id /* block */)a4;

@end
