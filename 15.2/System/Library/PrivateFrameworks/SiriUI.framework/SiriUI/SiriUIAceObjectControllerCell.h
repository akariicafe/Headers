@class NSString, SiriUIAceObjectViewController, UIView;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell <CAAnimationDelegate> {
    UIView *_animationView;
    double _topPadding;
}

@property (retain, nonatomic) SiriUIAceObjectViewController *aceViewController;
@property (nonatomic) long long insertionAnimationType;
@property (nonatomic) long long replacementAnimationType;
@property (retain, nonatomic) UIView *replacedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)beginAnimation;
- (void)prepareForReuse;
- (void)setTopPadding:(double)a0;
- (void)_parentViewInCell;
- (void)_parentPreviousViewInCell;
- (void)_animateInsertionFlyIn;
- (void)_animateInsertionFadeIn;
- (void)_animateReplacementCrossFade;
- (id)_flyInAnimationForAceViewController:(id)a0;
- (void)configureSubviewsForAnimationType;

@end
