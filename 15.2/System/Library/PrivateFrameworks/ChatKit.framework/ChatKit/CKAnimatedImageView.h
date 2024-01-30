@class NSArray, CKAnimatedImage, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (nonatomic) BOOL automaticallyObserveWindowForAnimationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateAnimationTimerObserving;
- (void)dealloc;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)didMoveToWindow;

@end
