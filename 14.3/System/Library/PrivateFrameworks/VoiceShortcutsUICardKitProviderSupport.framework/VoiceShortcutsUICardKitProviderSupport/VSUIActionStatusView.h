@class _VSUIActionStatusErrorView, NSString, UIView;
@protocol VSUIActionStatusViewDelegate;

@interface VSUIActionStatusView : UIView <SUICProgressStateMachineObserving>

@property (retain, nonatomic) UIView *activityView;
@property (retain, nonatomic) _VSUIActionStatusErrorView *errorView;
@property (weak, nonatomic) id<VSUIActionStatusViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetState;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setUpViews;
- (void)progressStateMachine:(id)a0 didTransitionToState:(unsigned long long)a1 fromState:(unsigned long long)a2 forEvent:(unsigned long long)a3;
- (void)progressStateMachine:(id)a0 ignoredEvent:(unsigned long long)a1;
- (void)_updateAcitivityViewSubviewWithDelegateProvidedView;

@end
