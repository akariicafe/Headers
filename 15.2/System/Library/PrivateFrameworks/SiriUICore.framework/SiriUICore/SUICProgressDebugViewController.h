@class NSString, NSProgress, SUICProgressIndicatorViewController, SUICProgressStateMachine, UIButton;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {
    SUICProgressIndicatorViewController *_indicatorViewController;
    UIButton *_eventGeneratorButton;
    SUICProgressStateMachine *_stateMachine;
    unsigned long long _testEventLoopCounter;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)stateMachineForProgressIndicatorViewController:(id)a0;
- (void)_eventGeneratorButtonTouchedUpInside:(id)a0;

@end
