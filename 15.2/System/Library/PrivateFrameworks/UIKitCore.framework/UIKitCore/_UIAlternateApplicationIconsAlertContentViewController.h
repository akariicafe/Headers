@class NSString, UILabel;

@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController {
    UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *messageText;

- (void)didMoveToParentViewController:(id)a0;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)a0;
- (void)loadView;
- (void)__updateWithVisualStyle:(id)a0;
- (void)_updateWithContainingAlertControllerVisualStyle;
- (void).cxx_destruct;

@end
