@class NSURLSession, NSString, WBSCompletionQuery, NSMutableSet, UniversalSearchSession, NSObject;
@protocol OS_dispatch_queue, LoadProgressObserver;

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate> {
    NSString *_currentSearchString;
    WBSCompletionQuery *_currentCompletionQuery;
    NSString *_userAgentString;
    NSURLSession *_session;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableSet *pendingTasks;
@property (weak, nonatomic) id<LoadProgressObserver> loadProgressObserver;
@property (weak, nonatomic) UniversalSearchSession *universalSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (id)completionsForQuery:(id)a0;
- (void)setQueryToComplete:(id)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (void)_didFinishSearchTask:(id)a0;
- (id)suggestionStringsForData:(id)a0;
- (void)_willStartSearchTask:(id)a0;

@end
