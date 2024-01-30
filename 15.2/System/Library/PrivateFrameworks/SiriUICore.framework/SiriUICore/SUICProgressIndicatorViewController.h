@class NSString, SUICProgressIndicatorView;
@protocol SUICProgressIndicatorViewControllerDataSource;

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving>

@property (retain, nonatomic, getter=_progressIndicatorView, setter=_setProgressIndicatorView:) SUICProgressIndicatorView *progressIndicatorView;
@property (weak, nonatomic) id<SUICProgressIndicatorViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_stateMachine;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_shouldAcceptEventsFromStateMachine:(id)a0;
- (void)progressStateMachine:(id)a0 didTransitionToState:(unsigned long long)a1 fromState:(unsigned long long)a2 forEvent:(unsigned long long)a3;
- (void)progressStateMachine:(id)a0 ignoredEvent:(unsigned long long)a1;

@end
