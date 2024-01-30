@class NSString, NSArray, NSOperationQueue, WBSBrowserTabCompletionInfo;
@protocol WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate;

@interface WBSBrowserTabCompletionProvider : NSObject {
    NSOperationQueue *_queue;
    NSArray *_tabInfos;
    WBSBrowserTabCompletionInfo *_selectedTabInfo;
}

@property (weak, nonatomic) id<WBSBrowserTabCompletionProviderSource> dataSource;
@property (weak, nonatomic) id<WBSBrowserTabCompletionProviderDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *currentQuery;
@property (readonly, copy, nonatomic) NSArray *currentTabCompletionMatches;
@property (readonly, copy, nonatomic) NSArray *tabInfos;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_prepareQueue;
- (long long)_compareTabMatch:(id)a0 otherTabMatch:(id)a1;
- (id)selectedTabInfo;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:(id)a0;
- (BOOL)_isOperationValidForQuery:(id)a0 tabInfos:(id)a1 selectedTabInfo:(id)a2;
- (id)_matchesForQuery:(id)a0 tabInfos:(id)a1 selectedTabInfo:(id)a2 forQueryID:(long long)a3;
- (id)bestTabCompletionMatchFromMatches:(id)a0 withTopHitURL:(id)a1 isBestMatchTopHit:(BOOL *)a2;
- (id)bestTabCompletionMatchWithTopHitURL:(id)a0 isBestMatchTopHit:(BOOL *)a1;
- (void)setCurrentQuery:(id)a0 forQueryID:(long long)a1;
- (void)tabCompletionMatchesForQuery:(id)a0 completionHandler:(id /* block */)a1;

@end
