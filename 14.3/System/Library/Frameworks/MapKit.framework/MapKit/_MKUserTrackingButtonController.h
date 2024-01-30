@class _MKUserTrackingButton, NSString, UIImageView, UIActivityIndicatorView;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {
    id<MKUserTrackingButtonTarget> _target;
    _MKUserTrackingButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (weak, nonatomic) id<MKUserTrackingView> userTrackingView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long buttonBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_goToNextMode:(id)a0;
- (void)_reloadState;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updatePreferredSymbolConfiguration;
- (void)dealloc;
- (id)initWithTarget:(id)a0 userTrackingView:(id)a1 imageView:(id)a2 button:(id)a3;
- (id)_imageForState:(long long)a0 controlState:(unsigned long long)a1;
- (void)_updateState;
- (id)_expandAnimation;
- (void)_updateLoading;
- (id)_activityIndicatorView;
- (void)_authorizationStatusChanged:(id)a0;
- (id)_contentAnimation;
- (BOOL)_shouldAnimateFromState:(long long)a0 toState:(long long)a1;
- (id)_shrinkAnimation;

@end
