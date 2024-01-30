@interface SBHTableViewController : UITableViewController {
    long long _styleBeforeShowingNoResults;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rawKeyboardFrame;
}

@property (class, readonly, nonatomic) Class tableViewClass;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrame;
@property (nonatomic) BOOL showNoResultsView;

- (void)_keyboardWillShow:(id)a0;
- (double)headerTopOccludingInset;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_keyboardWillDismiss:(id)a0;
- (void)_keyboardWillResize:(id)a0;
- (void)_reloadNoResultsViewForKeyboardNotification:(id)a0;

@end
