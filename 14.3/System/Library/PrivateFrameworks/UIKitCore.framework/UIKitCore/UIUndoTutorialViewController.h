@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UIUndoTutorialView *tutorialView;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)doneButtonPressed;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
