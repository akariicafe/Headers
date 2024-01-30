@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning> {
    int _animationCompletionBarrier;
}

@property (nonatomic) double duration;
@property (nonatomic) BOOL reversed;
@property (nonatomic) BOOL isForward;
@property (readonly) struct CGPoint { double x; double y; } currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL tracksWithFinger;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)initWithSettings:(id)a0;
- (BOOL)_canComplete;
- (id)init;
- (void)dealloc;
- (void)makeCurrentTransitionInteractiveWithContext:(id)a0 andProgress:(double)a1;
- (void)animateTransitionWithContext:(id)a0;
- (void)endInteractiveTransitionWithContext:(id)a0 transitionCompleted:(BOOL)a1;
- (void)startInteractiveTransitionWithContext:(id)a0;
- (void)updateInteractiveTransitionWithContext:(id)a0 andProgress:(double)a1;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingDuration:(double)a0;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(BOOL)a3 duration:(double)a4 doEaseIn:(BOOL)a5 doEaseOut:(BOOL)a6 isCompleting:(BOOL)a7 wasCancelled:(BOOL)a8 fromProgress:(double)a9 completionHandler:(id /* block */)a10;
- (void)transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 completionHandler:(id /* block */)a3;
- (double)transitionDurationWithContext:(id)a0;
- (void)setSettingReversed:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })resolveLocation:(struct CGPoint { double x0; double x1; })a0;

@end
