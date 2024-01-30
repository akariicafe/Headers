@class NSString, UILabel;

@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController {
    UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *messageText;

- (void).cxx_destruct;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)a0;
- (void)__updateWithVisualStyle:(id)a0;
- (void)_updateWithContainingAlertControllerVisualStyle;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;

@end
