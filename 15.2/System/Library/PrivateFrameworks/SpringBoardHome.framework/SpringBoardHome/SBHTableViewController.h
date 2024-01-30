@class NSArray, UIView;

@interface SBHTableViewController : UITableViewController {
    long long _styleBeforeShowingNoResults;
    NSArray *_centerNoResultsViewConstraints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rawKeyboardFrame;
}

@property (class, readonly, nonatomic) Class tableViewClass;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrame;
@property (nonatomic) BOOL showNoResultsView;
@property (retain, nonatomic) UIView *noResultsView;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (double)headerTopOccludingInset;
- (void)_keyboardWillDismiss:(id)a0;
- (void)_resetNoResultsView;
- (void)_removeAutoLayoutConstraintsForNoResultsView;
- (void)_addAutoLayoutConstraintsForNoResultsView;
- (void)_reloadNoResultsViewForKeyboardNotification:(id)a0;
- (void)_keyboardWillResize:(id)a0;

@end
