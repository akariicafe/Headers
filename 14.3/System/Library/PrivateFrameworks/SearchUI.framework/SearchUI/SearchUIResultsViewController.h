@class UISearchTextField, NSString, SearchUIResultsTableViewController, NSArray, SearchUIBackgroundView, UIResponder, UIView;
@protocol SFFeedbackListener, SearchUIResultsViewDelegate;

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) SearchUIResultsTableViewController *resultsTableViewController;
@property (retain, nonatomic) NSString *previousSearchString;
@property (weak, nonatomic) id<SearchUIResultsViewDelegate> delegate;
@property (nonatomic) BOOL shouldHideResultsUnderKeyboard;
@property (nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;
@property (readonly, nonatomic) double distanceToTopOfAppIcons;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) UIResponder *responderForKeyboardInput;
@property (nonatomic) BOOL shortenTopFloatingHeader;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL immediatelyShowCardForSingleResult;
@property (retain, nonatomic) UISearchTextField *searchField;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ cellWillDisplayHandler;
@property (copy, nonatomic) id /* block */ tableViewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ tableViewDidUpdateHandler;

- (id)contentScrollView;
- (void).cxx_destruct;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performScrollTestWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollToIndexPath:(id)a0;
- (void)tapAtIndexPath:(id)a0;
- (void)restoreResultsIfNeeded;
- (void)highlightResult:(id)a0;
- (void)didTap;
- (void)viewDidLayoutSubviews;
- (void)purgeMemory;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)updateWithResultSections:(id)a0 resetScrollPoint:(BOOL)a1;
- (void)updateWithResultSections:(id)a0;
- (void)didBeginScrolling;
- (void)didFocusOnCell:(id)a0;
- (double)contentHeightForWidth:(double)a0 maxHeight:(double)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)performReturnKeyPressAction;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)didScrollPastBottomOfContent;
- (void)toggleShowMoreForSection:(unsigned long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)currentTableModel;
- (BOOL)_canShowWhileLocked;

@end
