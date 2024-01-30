@class NSArray, NSString, NSMutableSet, NSMutableOrderedSet;

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIShowMoreSectionsDelegate>

@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSArray *hiddenSections;
@property (retain, nonatomic) NSMutableSet *potentiallyVisibleCells;
@property (retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property (nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;
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

+ (void)fetchContactsIfNeededForTableModel:(id)a0;
+ (id)hiddenSectionsFromSections:(id)a0;

- (void)didEngageResult:(id)a0;
- (void)performExpansion:(BOOL)a0 withSectionIndex:(unsigned long long)a1;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)sectionShouldBeExpanded:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)highlightResult:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)modalViewControllerClosed;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)cellForIndexPath:(id)a0 reuseIfPossible:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)purgeMemory;
- (void)scrollTableToTop;
- (void)showMoreSectionsWithShowMoreButtonRowModel:(id)a0;
- (void)scrollSectionToTop:(unsigned long long)a0 animate:(BOOL)a1;
- (id)visibleResultsWithinRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)expandCellsIfNeeded;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)commandEnvironment;
- (void)tableView:(id)a0 didEndDisplayingHeaderView:(id)a1 forSection:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)purgeAndResetTable;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)view:(id)a0 isVisibleInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setShouldUseInsetRoundedSections:(BOOL)a0;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (BOOL)updateMustAccountForLayout;
- (void)toggleExpansionForSection:(id)a0;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)toggleShowMoreForSection:(unsigned long long)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (double)offScreenContentScrollDistance;
- (void)sendVisibleFeedbackIfNecessary;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
