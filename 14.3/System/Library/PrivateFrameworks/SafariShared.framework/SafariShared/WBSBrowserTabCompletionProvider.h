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

- (id)init;
- (void).cxx_destruct;
- (void)_performTabCompletionOperationForQuery:(id)a0 tabInfos:(id)a1 selectedTabInfo:(id)a2 forQueryID:(long long)a3;
- (id)bestTabCompletionMatchFromMatches:(id)a0 withTopHitURL:(id)a1 isBestMatchTopHit:(BOOL *)a2;
- (long long)_compareTabMatch:(id)a0 otherTabMatch:(id)a1;
- (void)_tabCompletionOperationCompletedForQuery:(id)a0 matches:(id)a1 tabInfos:(id)a2 selectedTabInfo:(id)a3;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:(id)a0;
- (void)setCurrentQuery:(id)a0 forQueryID:(long long)a1;
- (id)bestTabCompletionMatchWithTopHitURL:(id)a0 isBestMatchTopHit:(BOOL *)a1;
- (void)invalidate;

@end
