@class UIBarButtonItem, NSString, NSArray, UITableView, UITextField, NSLayoutConstraint, UILabel, UIScrollView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TSSetupFlowItem> {
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    struct CGSize { double width; double height; } _keyboardSize;
    UIBarButtonItem *_nextButton;
}

@property (weak, nonatomic) id<TSSIMSetupFlowDelegate> delegate;
@property (weak, nonatomic) UILabel *enterActivationLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void)configureCell:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)keyboardWasShown:(id)a0;
- (void)keyboardWillBeHidden:(id)a0;
- (void)scrollViewForKeyboardIfNecessary;
- (void)addNewPlanWithUserInfo:(id)a0;

@end
