@class NSString, CALayer, UILabel, UIView;

@interface ICPasswordLockTileView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) CALayer *lockHandle;
@property (retain, nonatomic) CALayer *lockBase;
@property (retain, nonatomic) CALayer *lockGroupLayer;
@property (retain, nonatomic) CALayer *backdropLayer;
@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isLocked;
@property (copy, nonatomic) id /* block */ fadeInCompletionHandler;
@property (copy, nonatomic) id /* block */ fadeOutCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockTileView;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)fadeAnimationWithStartAlpha:(double)a0 endAlpha:(double)a1 beginTime:(double)a2 duration:(double)a3;
- (id)lockAnimationWithBeginTime:(double)a0;
- (id)unLockAnimationWithBeginTime:(double)a0;
- (void)showFadeInAnimationForActivityType:(unsigned long long)a0 afterDelay:(double)a1 completionHandler:(id /* block */)a2;
- (void)showFadeOutAnimationForActivityType:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
