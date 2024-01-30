@class CSSearchQuery, NSArray, CKSpotlightQuery, NSString, CKConversationListCellLayout;
@protocol CKConversationResultsControllerDelegate;

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating>

@property (readonly, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSArray *topConversationsResults;
@property (retain, nonatomic) NSArray *messageResults;
@property (retain, nonatomic) CKSpotlightQuery *currentQuery;
@property (retain, nonatomic) CSSearchQuery *topConversationsQuery;
@property (retain, nonatomic) NSString *selectedChatGUID;
@property (nonatomic) BOOL gotTopConversationResults;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property (weak, nonatomic) id<CKConversationResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)setCurrentSearchResultSelected:(BOOL)a0;
- (Class)_conversationListCellClass;
- (void)_reloadDataForNewResults;
- (void)_selectChatGUID:(id)a0;
- (id)_topConversationsQueryForText:(id)a0;
- (void)_updateTableViewRowHeights;
- (void)cancelCurrentQuery;
- (void)searchEnded;
- (void)topConversationsQueryCompletedWithResults:(id)a0;

@end
