@class NSString;

@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy, GEOResourceManifestTileGroupObserver> {
    id _urlsChangedListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateIfNecessary;
- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)a0;

@end
