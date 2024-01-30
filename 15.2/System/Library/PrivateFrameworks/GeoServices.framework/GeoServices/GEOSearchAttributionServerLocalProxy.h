@class geo_isolater, NSString, NSMapTable, NSMutableArray, GEOSearchAttributionManifest;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy> {
    NSMapTable *_listeners;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listenersLock;
    BOOL _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _attributionManifestLock;
    geo_isolater *_isolater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_attributionManifest;
- (void)_sendError:(id)a0 toListener:(id)a1;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_sendInfo:(id)a0 toListener:(id)a1;
- (void)_loadAttributionInfoForListener:(id)a0;

@end
