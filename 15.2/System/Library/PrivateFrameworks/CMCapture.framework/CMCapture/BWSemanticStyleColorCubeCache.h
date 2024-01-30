@class NSMutableArray, BWColorLookupCache, NSMutableDictionary;

@interface BWSemanticStyleColorCubeCache : NSObject {
    BWColorLookupCache *_colorLookupCache;
    NSMutableDictionary *_cubeFilterCache;
    NSMutableArray *_recentFilterCacheKeys;
    BOOL _cachingEnabled;
    unsigned long long _cacheMaxSize;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithColorLookupCache:(id)a0;
- (id)filtersForSemanticStyle:(id)a0 sceneType:(int)a1 personSegmentationEnabled:(BOOL)a2 maskVisualizationEnabled:(BOOL)a3 filtersToCombine:(id)a4;

@end
