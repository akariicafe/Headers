@class SFCard, NSString, SearchUITableModel;
@protocol SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUICardViewDelegate;

@interface SearchUICardTableViewController : SearchUITableViewController <SearchUICardTableBridgingProtocol>

@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (weak) id<SearchUISizingDelegate> sizingDelegate;
@property (weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (copy, nonatomic) id /* block */ cellWillDisplayHandler;
@property (copy, nonatomic) id /* block */ tableViewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ tableViewDidUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldDrawTopAndBottomSeparators;
- (id)scrollViewForSizing;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)updateTopPadding;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)showViewController:(id)a0;
- (void)reloadViews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)cellForIndexPath:(id)a0 reuseIfPossible:(BOOL)a1;
- (void)updateSelectionStyleForCell:(id)a0;
- (double)offScreenContentScrollDistance;

@end
