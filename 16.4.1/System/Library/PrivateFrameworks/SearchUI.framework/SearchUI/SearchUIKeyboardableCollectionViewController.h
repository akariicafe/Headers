@class NSString, UITextField;
@protocol SearchUIKeyboardableTableViewDelegate;

@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) double additionalKeyboardHeight;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (weak, nonatomic) UITextField *textField;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deletePressed;
- (void)addKeyCommandForKey:(id)a0 action:(SEL)a1;
- (void)rightArrowPressed;
- (void)goBack;
- (double)contentHeight;
- (void)selectHighlightedRow;
- (void)escapeButtonPressed;
- (void)moveCursorToEnd;
- (void)highlightRowAtIndexPath:(id)a0;
- (void)showKeyboard;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (BOOL)contentVisibleUnderKeyboard;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (void)scrollIndexPathToVisible:(id)a0;
- (BOOL)isOnCard;
- (double)adjustedVerticalOffset;
- (void)selectAllTextInTextField;
- (void)moveCursorToPosition:(id)a0;
- (void)returnKeyPressed;
- (void)downArrowPressed:(id)a0;
- (void)moveCursorToBeginning;
- (id)indexPathForNextSelectableIndexPath:(id)a0 upward:(BOOL)a1;
- (void)upArrowPressed:(id)a0;
- (void)keyboardFrameChanged:(id)a0;
- (void)leftArrowPressed;
- (void)highlightNextRowAtIndexPath:(id)a0 upward:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)canBecomeFirstResponder;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
