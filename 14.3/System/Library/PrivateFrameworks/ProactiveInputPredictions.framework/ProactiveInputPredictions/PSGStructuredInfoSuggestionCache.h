@class NSString, _PASTuple2, NSDate;

@interface PSGStructuredInfoSuggestionCache : NSObject {
    _PASTuple2 *_cachedSuggestions;
    NSString *_localeIdentifier;
    NSDate *_startTime;
    double _ttlSeconds;
}

+ (id)sharedInstance;
+ (id)emptySuggestionsPlaceholder;
+ (BOOL)_matchesPredictedValue:(id)a0 prefixValue:(id)a1;

- (void)addStructuredInfoSuggestions:(id)a0 localeIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)searchWithContext:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;
- (BOOL)_isCacheEmpty;
- (BOOL)_maybeClearCache;
- (id)initWithTTLSeconds:(double)a0;
- (void)addEmptyPlaceholderForTrigger:(id)a0 localeIdentifier:(id)a1;
- (void)invalidate;
- (id)searchWithTrigger:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;

@end
