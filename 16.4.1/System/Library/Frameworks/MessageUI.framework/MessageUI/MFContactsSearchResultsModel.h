@class NSArray, NSString, NSOperationQueue, NSMutableDictionary;

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer> {
    NSOperationQueue *_queue;
    NSArray *_recentSearchResults;
    NSArray *_infrequentRecentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    NSMutableDictionary *_serverSearchResultsByAddress;
    NSMutableDictionary *_recentRecipientsByAddress;
    struct __CFArray { } *_resultTypesSortOrder;
    struct __CFArray { } *_resultTypesPriorityOrder;
    struct __CFSet { } *_finishedResultTypes;
    unsigned long long _preferredType;
    BOOL _favorMobileNumbers;
    int _resetCount;
}

@property (retain, nonatomic) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_isResetting;
- (void)_addBestRecipientsForRecipients:(id)a0 excluding:(id)a1 toArray:(id)a2;
- (void)_addResults:(id)a0 ofType:(unsigned long long)a1;
- (void)_appendSortedResultsOfType:(unsigned long long)a0 excluding:(id)a1 toResults:(id)a2;
- (id)_bestRecipientForAddress:(id)a0 fallback:(id)a1;
- (id)_dictionaryForResultType:(unsigned long long)a0;
- (BOOL)_didFinishSearchForType:(unsigned long long)a0;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id /* block */)a0;
- (void)_finishSearchOfType:(unsigned long long)a0;
- (BOOL)_shouldProcessResultsAfterFinishingType:(unsigned long long)a0;
- (void)addResults:(id)a0 ofType:(unsigned long long)a1;
- (id)initWithFavorMobileNumbers:(BOOL)a0;
- (id)initWithResultTypeSortOrderComparator:(void /* function */ *)a0 resultTypePriorityComparator:(void /* function */ *)a1 favorMobileNumbers:(BOOL)a2;
- (void)processAddedResultsOfType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
