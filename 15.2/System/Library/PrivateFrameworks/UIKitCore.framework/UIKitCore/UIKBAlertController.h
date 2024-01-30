@protocol UIKBAlertControllerDelegate;

@interface UIKBAlertController : UIAlertController

@property (nonatomic) id<UIKBAlertControllerDelegate> kbDelegate;

- (void)viewDidDisappear:(BOOL)a0;

@end
