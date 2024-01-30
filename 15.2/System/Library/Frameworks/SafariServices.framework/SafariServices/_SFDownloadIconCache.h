@class NSPointerArray, NSMutableDictionary, NSMutableSet;

@interface _SFDownloadIconCache : NSObject {
    NSPointerArray *_observers;
    NSMutableDictionary *_thumbnailCache;
    NSMutableDictionary *_utiCache;
    NSMutableSet *_activeRequestIdentifiers;
}

- (void)addObserver:(id)a0;
- (id)_genericIconForUTI:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_didGenerateThumbnail:(id)a0 forSource:(id)a1;
- (id)iconForSource:(id)a0;
- (void)regenerateIconForSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_lookupGenericIconForType:(id)a0;
- (void)_startThumbnailRequestForSource:(id)a0 reportGenericIcons:(BOOL)a1;
- (void)_generateThumbnailForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
