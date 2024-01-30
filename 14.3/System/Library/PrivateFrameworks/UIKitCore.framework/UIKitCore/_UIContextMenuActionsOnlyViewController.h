@class UITargetedPreview;

@interface _UIContextMenuActionsOnlyViewController : UIViewController

@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (id)initWithTargetedPreview:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
