@class NSArray;
@protocol CPSearch;

@interface CPSearchQueryShim : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _handlerBlockLock;
    long long _searchState;
    BOOL _canceled;
    BOOL _csSearchQuery;
}

@property (readonly, nonatomic) id<CPSearch> search;
@property (copy) id /* block */ foundItemsHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ gatherEndedHandler;
@property (copy) id /* block */ changedItemsHandler;
@property (copy) id /* block */ removedItemsHandler;
@property (copy) id /* block */ countChangedHandler;
@property (copy) id /* block */ foundItemHandler;
@property (copy, nonatomic) NSArray *bundleIDs;

+ (id)log;

- (void)start;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)_handleCompletionWithError:(id)a0;
- (id)debugDescription;
- (id)initWithSearch:(id)a0 context:(id)a1;
- (void)_handleFoundItems:(id)a0;
- (id)initWithQueryString:(id)a0 searchParamStr:(id)a1 context:(id)a2;

@end
