@class NSString, NSConditionLock, DAContactsSearchQuery, DADConnection, NSMutableArray;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
    void *_source;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
}

@property (retain, nonatomic) DADConnection *connection;
@property (nonatomic) void *source;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL includeSourceInResults;
@property (nonatomic) BOOL includePhotosInResults;
@property (nonatomic) id<ABPredicateDelegate> delegate;
@property (readonly, nonatomic) int error;

- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2 includeSourceInResults:(BOOL)a3 includePhotosInResults:(BOOL)a4;
- (void)ab_runPredicateWithSortOrder:(unsigned int)a0 ranked:(BOOL)a1 inAddressBook:(void *)a2 withDelegate:(id)a3;
- (void)runPredicate;
- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2 includeSourceInResults:(BOOL)a3;
- (int)_errorForDAStatusCode:(long long)a0;
- (void)runPredicateWithDelegate:(id)a0;
- (void)_searchQueryIsDone;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (id)initWithSearchString:(id)a0 source:(void *)a1 account:(id)a2;
- (void)dealloc;
- (id)querySerializationIdentifier;

@end
