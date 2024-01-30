@class UIViewController;
@protocol SBUISystemApertureElement;

@interface SBUISystemApertureElementSourceContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController;

- (id)_childViewControllerForAlwaysOnTimelines;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)_transitionCoordinator;
- (void).cxx_destruct;

@end
