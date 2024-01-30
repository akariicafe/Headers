@class SFCard;
@protocol SearchUICardViewDelegate;

@interface SearchUICardTableViewController : SearchUITableViewController

@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;

- (void)setTableModel:(id)a0;
- (void)updateSelectionStyleForCell:(id)a0;
- (void)updateTopPadding;
- (void)setShouldUseStandardSectionInsets:(BOOL)a0;
- (BOOL)shouldDrawTopAndBottomSeparators;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)cellForIndexPath:(id)a0 reuseIfPossible:(BOOL)a1;
- (void)showViewController:(id)a0;
- (void)setShouldUseInsetRoundedSections:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (double)offScreenContentScrollDistance;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
