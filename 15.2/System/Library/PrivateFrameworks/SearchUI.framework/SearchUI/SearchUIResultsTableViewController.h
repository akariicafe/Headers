@class UIControl, NSArray, NSString, NSMutableSet, NSMutableOrderedSet, UIView, SearchUITableModel;
@protocol UITextInput, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUIKeyboardableTableViewDelegate;

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIResultsTableBridgingProtocol>

@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSArray *hiddenSections;
@property (retain, nonatomic) NSMutableSet *potentiallyVisibleCells;
@property (retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property (nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;
@property (nonatomic) BOOL isVisibleFeedbackEnabled;
@property (retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleHeaders;
@property (retain, nonatomic) NSArray *latestVisibleHeadersAccountedForInFeedback;
@property (nonatomic) double cachedHeaderHeight;
@property (readonly, nonatomic) double headerHeight;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL shortenTopFloatingHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SearchUISizingDelegate> sizingDelegate;
@property (weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak) UIControl<UITextInput> *textField;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) id /* block */ cellWillDisplayHandler;
@property (copy, nonatomic) id /* block */ tableViewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ tableViewDidUpdateHandler;

+ (id)hiddenSectionsFromSections:(id)a0;

- (void)purgeMemory;
- (BOOL)sectionShouldBeExpanded:(id)a0;
- (id)majorScrollView;
- (void)purgeAndResetTable;
- (void)didEngageResult:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)showMoreSectionsWithShowMoreButtonRowModel:(id)a0;
- (void)sendVisibleFeedbackIfNecessary;
- (BOOL)updateMustAccountForLayout;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)didPresentToResumeSearch:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingHeaderView:(id)a1 forSection:(long long)a2;
- (id)commandEnvironment;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)highlightResult:(id)a0;
- (void).cxx_destruct;
- (void)willDismiss;
- (void)scrollTableToTop;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)expandCellsIfNeeded;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)toggleShowMoreForSection:(unsigned long long)a0;
- (void)toggleExpansionForSection:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)performExpansion:(BOOL)a0 withSectionIndex:(unsigned long long)a1;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1;
- (id)cellForIndexPath:(id)a0 reuseIfPossible:(BOOL)a1;
- (double)offScreenContentScrollDistance;
- (void)modalViewControllerClosed;
- (void)scrollSectionToTop:(unsigned long long)a0 animate:(BOOL)a1;
- (id)visibleResultsWithinRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
