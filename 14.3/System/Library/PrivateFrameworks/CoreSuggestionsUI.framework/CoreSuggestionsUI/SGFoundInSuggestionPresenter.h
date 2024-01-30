@class NSArray;
@protocol NSObject;

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter {
    id /* block */ _filterBlock;
    NSArray *_searchableItems;
    unsigned long long _contentOptions;
    id<NSObject> _contactStoreObserverToken;
    BOOL _loadScheduled;
}

@property (copy) NSArray *realtimeSuggestions;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addSuggestionsFromSearchableItems:(id)a0 options:(unsigned long long)a1 filter:(id /* block */)a2;
- (void)reloadSuggestionsFromSearchableItems;
- (void)_setNeedsToReloadSuggestionsAfter:(double)a0;
- (void)_loadSuggestions;
- (void)_loadedRealtimeSuggestions:(id)a0;
- (id)formatMixedCategoriesTitle:(id)a0;

@end
