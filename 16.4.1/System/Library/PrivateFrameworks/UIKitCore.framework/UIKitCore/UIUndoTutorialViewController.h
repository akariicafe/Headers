@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UIUndoTutorialView *tutorialView;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)viewDidLoad;
- (void)doneButtonPressed;
- (void).cxx_destruct;

@end
