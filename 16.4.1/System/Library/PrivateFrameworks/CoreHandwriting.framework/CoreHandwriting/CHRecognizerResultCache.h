@class NSMutableDictionary;

@interface CHRecognizerResultCache : NSObject {
    NSMutableDictionary *_lastDrawings;
    NSMutableDictionary *_textResults;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheTextResult:(id)a0 drawing:(id)a1 recognitionEngineCachingKey:(id)a2;
- (void)clearCacheForKey:(id)a0;
- (id)retrievePartialResultsForDrawing:(id)a0 recognitionEngineCachingKey:(id)a1 matchingColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;

@end
