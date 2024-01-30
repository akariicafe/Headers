@class NSArray, NSString, URLCompletionDatabase, WBSCompletionQuery, NSObject;
@protocol WBSParsecSearchSession, WBBookmarkProvider, OS_dispatch_queue;

@interface URLCompletionProvider : CompletionProvider {
    id<WBBookmarkProvider> _bookmarkProvider;
    unsigned long long _maxResults;
    NSString *_currentPrefix;
    BOOL _historyWasModified;
    BOOL _bookmarksWereModified;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _prefixMutex;
    unsigned long long _urlCompletionBackgroundTaskIdentifier;
    URLCompletionDatabase *_completionDatabase;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_cfCompletionQueue;
    BOOL _needScheduleBackgroundTaskOnAppSuspend;
    WBSCompletionQuery *_query;
}

@property (nonatomic) BOOL providesTopHits;
@property (retain, nonatomic) id<WBSParsecSearchSession> parsecSearchSession;
@property (retain, nonatomic) NSArray *searchParametersList;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)setQueryToComplete:(id)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (void)_historyDidChange:(id)a0;
- (void)_bookmarksDidChange:(id)a0;
- (void)_endURLCompletionBackgroundTask;
- (id)completionsForQuery:(id)a0 isCFSearch:(BOOL)a1;
- (id)getKeyForQueryString:(id)a0 isCFSearch:(BOOL)a1;
- (id)findCompletionsForKey:(id)a0 isCFSearch:(BOOL)a1;
- (id)_doUpdateForPrefix:(id)a0 withSearchParameters:(id)a1;
- (id)initWithBookmarkProvider:(id)a0 cloudTabStore:(id)a1 maxResults:(unsigned long long)a2 searchableCollectionsMask:(int)a3;
- (unsigned long long)cfErrorForQuery:(id)a0;

@end
