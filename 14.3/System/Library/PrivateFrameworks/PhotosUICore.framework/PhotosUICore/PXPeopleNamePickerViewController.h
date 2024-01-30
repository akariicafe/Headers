@class NSArray, NSString, PXPeopleNamePickerTitleView, NSLayoutConstraint, PXPeopleNamePickerResultsTableViewController;
@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) NSArray *savedRightBarItems;
@property (nonatomic) double yOffset;
@property (retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint;
@property (retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController;
@property (readonly, nonatomic) PXPeopleNamePickerTitleView *titleView;
@property (weak, nonatomic) id<PXPeopleNamePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidEnterBackground;
- (id)init;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)initWithPerson:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)adjustForAccessoryViewYOffset:(double)a0;
- (void)endNamingSession;
- (double)_titleViewMaxWidthForEditing:(BOOL)a0;
- (void)_showResultsView;
- (void)_hideResultsView;
- (void)_changePlaceholderTextOfTextField:(id)a0 toColor:(id)a1;
- (void)_keyboardDidShow:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
