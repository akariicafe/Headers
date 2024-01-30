@class NSString, SUICOrbView, CRSUIStatusBarStyleAssertion, UIView, AFUISiriCarPlayBackgroundView;
@protocol AFUISiriContentDelegate;

@interface AFUISiriCarPlayView : UIView <AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling> {
    id<AFUISiriContentDelegate> _siriContentDelegate;
    AFUISiriCarPlayBackgroundView *_backgroundView;
    SUICOrbView *_orbView;
    UIView *_orbContainerView;
    CRSUIStatusBarStyleAssertion *_statusBarStyleAssertion;
    UIView *_siriXIndicatorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UIView *remoteContentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setRequestHandlingStatus:(unsigned long long)a0;
- (void)_setupContentViews;
- (void)setAuxiliaryViewsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setSiriContentDelegate:(id)a0;
- (void)setContentViewsAlpha:(double)a0;
- (void)resetOrbViewToSiriSessionState;
- (void)updateBackgroundVisibility:(BOOL)a0;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)a0;
- (void)updateBackgroundViewMode:(long long)a0;
- (void)setInputPowerLevel:(float)a0;
- (void)setOutputPowerLevel:(float)a0;
- (void)backgroundView:(id)a0 requestsCarPlayStatusBarOverride:(BOOL)a1 animationSettings:(id)a2;
- (void)updateOrbViewState;
- (void)_orbHeldWithGestureRecognizer:(id)a0;
- (void)_orbTappedWithGestureRecognizer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orbViewRectInCarplayView;

@end
