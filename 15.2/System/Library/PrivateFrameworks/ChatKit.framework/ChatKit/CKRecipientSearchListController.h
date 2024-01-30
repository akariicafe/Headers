@class NSArray, IMAccount, CKContactsSearchManager, NSDate, IDSBatchIDQueryController, NSString;
@protocol CKRecipientSearchListControllerDelegate;

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate>

@property (retain, nonatomic) CKContactsSearchManager *searchManager;
@property (retain, nonatomic) NSDate *idsQueryStartTime;
@property (copy, nonatomic) NSArray *conversationCache;
@property (weak, nonatomic) id<CKRecipientSearchListControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *enteredRecipients;
@property (retain, nonatomic) NSArray *prefilteredRecipients;
@property (nonatomic) BOOL smsEnabled;
@property (nonatomic) BOOL suppressGroupSuggestions;
@property (retain, nonatomic) IMAccount *defaultiMessageAccount;
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController;
@property (copy, nonatomic) NSArray *searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldHideGroupsDonations;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)removeRecipient:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)viewDidAppearDeferredSetup;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)chatStateChanged:(id)a0;
- (void)searchWithText:(id)a0;
- (BOOL)isSearchResultsHidden;
- (id)_statusQueryController;
- (id)_conversationList;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)hasSearchResults;
- (void)contactsSearchManager:(id)a0 finishedSearchingWithResults:(id)a1;
- (id)conversationCacheForContactsSearchManager:(id)a0;
- (void)invalidateOutstandingIDStatusRequests;
- (void)invalidateSearchManager;
- (char)_serviceColorForRecipients:(id)a0;
- (long long)idsStatusForAddress:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)cancelSearch;

@end
