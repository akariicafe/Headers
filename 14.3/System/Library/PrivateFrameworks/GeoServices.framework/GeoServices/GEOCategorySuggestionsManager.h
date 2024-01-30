@protocol GEOCategorySuggestionsManagerServerProxy;

@interface GEOCategorySuggestionsManager : NSObject {
    id<GEOCategorySuggestionsManagerServerProxy> _serverProxy;
}

+ (id)sharedManager;
+ (void)setUseLocalProxy:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)fetchSpotlightCategorySuggestions:(id /* block */)a0;
- (id)_categorySuggestionsForSuggestionsResult:(id)a0 dayOfWeek:(long long)a1 hourOfDay:(long long)a2;
- (id)_spotlightCategorySuggestionsForResponse:(id)a0;
- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)a0;

@end
