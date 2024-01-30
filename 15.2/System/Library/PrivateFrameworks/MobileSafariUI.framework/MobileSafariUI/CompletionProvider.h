@class NSMutableDictionary, NSMutableArray;
@protocol CompletionProviderDelegate;

@interface CompletionProvider : NSObject {
    NSMutableDictionary *_completionsByString;
    NSMutableArray *_completedStringsInPruneOrder;
    BOOL _inCompletionsForString;
}

@property (weak, nonatomic) id<CompletionProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isFailing) BOOL failing;

- (void)fail;
- (void).cxx_destruct;
- (id)init;
- (id)completionsForQuery:(id)a0;
- (void)setCompletions:(id)a0 forString:(id)a1;
- (void)setQueryToComplete:(id)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (void)clearCachedCompletions;
- (id)completionsForQuery:(id)a0 isCFSearch:(BOOL)a1;
- (id)getKeyForQueryString:(id)a0 isCFSearch:(BOOL)a1;
- (id)findCompletionsForKey:(id)a0 isCFSearch:(BOOL)a1;
- (void)setCompletions:(id)a0 forString:(id)a1 isCFSearch:(BOOL)a2;
- (void)_pruneCachedCompletions;

@end
