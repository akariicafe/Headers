@class NSString, UIControl;
@protocol SearchUIKeyboardableTableViewDelegate, UITextInput;

@interface SearchUIKeyboardableTableViewController : UITableViewController <UIGestureRecognizerDelegate>

@property (nonatomic) double currentKeyboardHeight;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (weak) UIControl<UITextInput> *textField;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moveCursorToEnd;
- (id)indexPathForNextSelectableIndexPath:(id)a0 upward:(BOOL)a1;
- (void)downArrowPressed:(id)a0;
- (void)moveCursorToPosition:(id)a0;
- (void)returnKeyPressed;
- (void)highlightNextRowAtIndexPath:(id)a0 upward:(BOOL)a1;
- (void)keyboardFrameChanged:(id)a0;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (void)showKeyboard;
- (void)highlightRowAtIndexPath:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (void)leftArrowPressed;
- (void)rightArrowPressed;
- (void)deletePressed;
- (void)addKeyCommandForKey:(id)a0 action:(SEL)a1;
- (void)selectHighlightedRow;
- (void)scrollIndexPathToVisible:(id)a0;
- (void)goBack;
- (void)upArrowPressed:(id)a0;
- (BOOL)isOnCard;
- (void)escapeButtonPressed;
- (BOOL)contentVisibleUnderKeyboard;
- (double)contentHeight;
- (void)moveCursorToBeginning;
- (void)viewDidLayoutSubviews;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (void)setTableView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)tabKeyPressed;
- (void)hideCellsBelowKeyboardIfNecessary;

@end
