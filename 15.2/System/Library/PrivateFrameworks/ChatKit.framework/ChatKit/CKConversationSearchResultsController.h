@class CSSearchQuery, NSArray, CKSpotlightQuery, NSString;
@protocol CKConversationResultsControllerDelegate;

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating>

@property (readonly, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSArray *topConversationsResults;
@property (retain, nonatomic) NSArray *messageResults;
@property (retain, nonatomic) CKSpotlightQuery *currentQuery;
@property (retain, nonatomic) CSSearchQuery *topConversationsQuery;
@property (retain, nonatomic) NSString *selectedChatGUID;
@property (nonatomic) BOOL gotTopConversationResults;
@property (weak, nonatomic) id<CKConversationResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)searchEnded;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)cancelCurrentQuery;
- (void)_updateTableViewRowHeights;
- (Class)_conversationListCellClass;
- (id)_topConversationsQueryForText:(id)a0;
- (void)_reloadDataForNewResults;
- (void)topConversationsQueryCompletedWithResults:(id)a0;
- (void)_selectChatGUID:(id)a0;
- (void)setCurrentSearchResultSelected:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
