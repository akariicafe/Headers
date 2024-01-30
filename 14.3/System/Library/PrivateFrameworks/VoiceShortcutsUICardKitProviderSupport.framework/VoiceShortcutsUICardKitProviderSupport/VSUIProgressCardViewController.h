@class UIView, NSString, VSUIActionStatusView, SUICProgressIndicatorViewController, NSProgress, NSLayoutConstraint, UIActivityIndicatorView, SUICProgressStateMachine;

@interface VSUIProgressCardViewController : CRKCardViewController <SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource, VSUIActionStatusViewDelegate> {
    NSProgress *_progress;
    BOOL _animatesStateTransitions;
    NSLayoutConstraint *_statusViewSuccessHeightConstraint;
    NSLayoutConstraint *_statusViewFailureHeightConstraint;
}

@property (retain, nonatomic, getter=_statusView, setter=_setStatusView:) VSUIActionStatusView *statusView;
@property (retain, nonatomic, getter=_loadingIndicatorView, setter=_setLoadingIndicatorView:) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic, getter=_progressIndicatorViewController, setter=_setProgressIndicatorViewController:) SUICProgressIndicatorViewController *progressIndicatorViewController;
@property (retain, nonatomic, getter=_hairlineView, setter=_setHairlineView:) UIView *hairlineView;
@property (retain, nonatomic, getter=_progressStateMachine, setter=_setProgressStateMachine:) SUICProgressStateMachine *progressStateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_setUpViews;
- (void)handleCardCommand:(id)a0 reply:(id /* block */)a1;
- (void)cardSectionViewWillAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (id)_initWithCard:(id)a0 delegate:(id)a1 loadProvidersImmediately:(BOOL)a2;
- (id)stateMachineForProgressIndicatorViewController:(id)a0;
- (BOOL)shouldAnimateTransitionToState:(unsigned long long)a0 fromState:(unsigned long long)a1 forProgressIndicatorViewController:(id)a2;
- (void)progressStateMachine:(id)a0 didTransitionToState:(unsigned long long)a1 fromState:(unsigned long long)a2 forEvent:(unsigned long long)a3;
- (void)progressStateMachine:(id)a0 ignoredEvent:(unsigned long long)a1;
- (id)progressViewController;
- (void)_updateDelegateOnBoundsDidChange;
- (void)_setUpHelpers;
- (void)actionStatusView:(id)a0 didAddViewFromProgressViewController:(id)a1;

@end
