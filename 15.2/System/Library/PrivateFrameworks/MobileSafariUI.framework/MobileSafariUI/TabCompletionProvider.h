@class NSString, WBSBrowserTabCompletionProvider;
@protocol TabCompletionProviderDataSource;

@interface TabCompletionProvider : CompletionProvider <WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate> {
    WBSBrowserTabCompletionProvider *_browserTabCompletionProvider;
}

@property (weak, nonatomic) id<TabCompletionProviderDataSource> tabCompletionProviderDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)a0;
- (id)tabInfosForBrowserTabCompletionProvider:(id)a0;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)a0;
- (id)bestTabCompletionMatchForQuery:(id)a0 withTopHitURL:(id)a1 isBestMatchTopHit:(BOOL *)a2;
- (void)setQueryToComplete:(id)a0;
- (void)invalidateCachedTabData;

@end
