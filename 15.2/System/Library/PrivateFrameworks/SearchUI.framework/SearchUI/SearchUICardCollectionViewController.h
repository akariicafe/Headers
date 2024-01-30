@class SFCard, NSString, SearchUITableModel;
@protocol SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUICardViewDelegate;

@interface SearchUICardCollectionViewController : SearchUICollectionViewController <SearchUICardTableBridgingProtocol, SearchUITableViewTesting>

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
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

- (id)tableView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)scrollViewForSizing;
- (void)updateTopPadding;
- (id)cellForItemAtIndexPath:(id)a0;
- (void)reloadViews;

@end
