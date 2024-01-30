@class NSArray, UIView;

@interface SBHTableViewController : UITableViewController {
    long long _styleBeforeShowingNoResults;
    NSArray *_centerNoResultsViewConstraints;
}

@property (class, readonly, nonatomic) Class tableViewClass;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (nonatomic) BOOL showNoResultsView;
@property (retain, nonatomic) UIView *noResultsView;

- (void).cxx_destruct;
- (void)_keyboardWillShow:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_resetNoResultsView;
- (void)_removeAutoLayoutConstraintsForNoResultsView;
- (void)_addAutoLayoutConstraintsForNoResultsView;
- (void)_keyboardWillResize:(id)a0;
- (double)_calculateVerticalMultiplierForKeyboard;
- (void)_reloadNoResultsViewForKeyboardNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_keyboardWillDismiss:(id)a0;
- (void)viewDidLoad;

@end
