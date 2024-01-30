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

- (id)initWithTTLSeconds:(double)a0;
- (id)searchWithTrigger:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;
- (id)searchWithContext:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)addEmptyPlaceholderForTrigger:(id)a0 localeIdentifier:(id)a1;
- (BOOL)_maybeClearCache;
- (void)invalidate;
- (BOOL)_isCacheEmpty;
- (void)addStructuredInfoSuggestions:(id)a0 localeIdentifier:(id)a1;

@end
