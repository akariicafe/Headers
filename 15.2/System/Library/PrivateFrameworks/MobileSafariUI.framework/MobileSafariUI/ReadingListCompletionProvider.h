@class NSString;

@interface ReadingListCompletionProvider : CompletionProvider {
    unsigned int _maxResults;
    NSString *_stringToComplete;
}

@property (readonly, nonatomic) BOOL onlyIncludeAvailableOffline;

- (void).cxx_destruct;
- (void)setQueryToComplete:(id)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (id)initWithMaximumNumberOfCompletions:(unsigned int)a0 onlyIncludeAvailableOffline:(BOOL)a1;

@end
