@class NSString, NSArray, NSDictionary, PXIDSAddressQueryController, NSMutableArray, CNAutocompleteSearchManager, PXCNRecipientSearchDataSource, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer> {
    NSObject<OS_dispatch_queue> *_creationQueue;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    _Atomic unsigned int _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
}

@property (readonly, nonatomic) PXCNRecipientSearchDataSource *dataSource;
@property (retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeRecipientResult:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)queryStringDidChange;
- (void)_handleAddressQueryResults:(id)a0 error:(id)a1;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)a0 forSearchTaskID:(id)a1;
- (void)_finishedCreatingRecipientSearchResults:(id)a0 forSearchTaskID:(id)a1;
- (void)_createDataSource;

@end
