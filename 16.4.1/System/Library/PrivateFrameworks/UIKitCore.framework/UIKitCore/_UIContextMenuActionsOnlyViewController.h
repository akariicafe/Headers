@class UITargetedPreview;

@interface _UIContextMenuActionsOnlyViewController : UIViewController

@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (id)initWithTargetedPreview:(id)a0;

@end
