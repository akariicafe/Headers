@class NSString, NSMutableDictionary;

@interface CNAutocompleteFontMetricCache : NSObject {
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
}

+ (id)sharedFontMetricCache;

- (id)init;
- (void).cxx_destruct;
- (id)cachedFont:(id /* block */)a0 forKey:(id)a1;
- (void)_didReceivePreferredFontChangedNotification:(id)a0;
- (id)cachedPreferredFontForStyle:(id)a0;
- (double)cachedFloat:(id /* block */)a0 forKey:(id)a1;
- (double)cachedScaledFloatWithValue:(double)a0 forKey:(id)a1;
- (double)cachedScaledFloatWithValue:(double)a0 fontStyle:(id)a1;
- (BOOL)ensureCacheIsValid;
- (id)metricCacheDictionary;
- (void)_invalidateCache;

@end
