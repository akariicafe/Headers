@class NSMutableDictionary, NSMutableArray;
@protocol CompletionProviderDelegate;

@interface CompletionProvider : NSObject {
    NSMutableDictionary *_completionsByString;
    NSMutableArray *_completedStringsInPruneOrder;
    BOOL _inCompletionsForString;
}

@property (weak, nonatomic) id<CompletionProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isFailing) BOOL failing;

- (id)init;
- (void).cxx_destruct;
- (void)fail;
- (id)completionsForQuery:(id)a0 isCFSearch:(BOOL)a1;
- (void)_pruneCachedCompletions;
- (void)clearCachedCompletions;
- (id)completionsForQuery:(id)a0;
- (id)findCompletionsForKey:(id)a0 isCFSearch:(BOOL)a1;
- (id)getKeyForQueryString:(id)a0 isCFSearch:(BOOL)a1;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setCompletions:(id)a0 forString:(id)a1;
- (void)setCompletions:(id)a0 forString:(id)a1 isCFSearch:(BOOL)a2;
- (void)setQueryToComplete:(id)a0;

@end
