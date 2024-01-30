@class NSOrderedSet, NSString, NSMutableOrderedSet;

@interface SFTextSearchMatchesCounter : NSObject <UITextSearchAggregator> {
    NSMutableOrderedSet *_allFoundRanges;
    id /* block */ _completionHandler;
    NSString *_queryString;
    BOOL _valid;
}

@property (readonly, nonatomic) NSOrderedSet *allFoundRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)finishedSearching;
- (void)foundRange:(id)a0 forSearchString:(id)a1 inDocument:(id)a2;
- (void)invalidateFoundRange:(id)a0 inDocument:(id)a1;
- (BOOL)canSkipCountingMatchesForQueryString:(id)a0 wordMatchMethod:(long long)a1;
- (id)initWithQueryString:(id)a0 completionHandler:(id /* block */)a1;

@end
