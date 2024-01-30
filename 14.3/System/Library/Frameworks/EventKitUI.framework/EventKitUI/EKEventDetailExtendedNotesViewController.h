@class NSString, UITextView;
@protocol EKEditItemViewControllerDelegate;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UITextView *_textView;
}

@property (copy, nonatomic) NSString *notes;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (id)init;
- (void).cxx_destruct;
- (void)loadTextView;
- (void)loadView;
- (void)updateTextView;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
