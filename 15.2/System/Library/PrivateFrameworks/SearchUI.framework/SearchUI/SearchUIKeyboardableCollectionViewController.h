@class NSString, UITextField;
@protocol SearchUIKeyboardableTableViewDelegate;

@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (weak, nonatomic) UITextField *textField;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
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
- (void)selectAllTextInTextField;
- (void)upArrowPressed:(id)a0;
- (void)viewDidLoad;
- (BOOL)isOnCard;
- (void)escapeButtonPressed;
- (BOOL)contentVisibleUnderKeyboard;
- (double)contentHeight;
- (void)moveCursorToBeginning;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setCollectionView:(id)a0;
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
