@class NSString, NSMutableDictionary, UIImage, CPMemoryPool, NSHashTable;

@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding> {
    NSMutableDictionary *_images;
    NSMutableDictionary *_unmaskedImages;
    NSHashTable *_failedIcons;
    UIImage *_genericImage;
    UIImage *_overlayImage;
    UIImage *_unmaskedOverlayImage;
    NSHashTable *_observedIcons;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) CPMemoryPool *iconImagesMemoryPool;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) UIImage *genericImage;
@property (readonly, nonatomic) UIImage *overlayImage;
@property (readonly, nonatomic) UIImage *unmaskedOverlayImage;
@property (nonatomic) unsigned long long poolingBypassCount;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)_backgroundQueue;
+ (BOOL)supportsMemoryPooling;
+ (id)overlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

- (id)cachedUnmaskedImageForIcon:(id)a0;
- (id)memoryMappedIconImageForIconImage:(id)a0;
- (id)_cacheKeyForIcon:(id)a0;
- (void)cacheImagesForIcons:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)endObservingIcon:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)pooledIconImageForMappedIconImage:(id)a0;
- (id)memoryMappedIconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 withDrawing:(id /* block */)a2;
- (id)succinctDescriptionBuilder;
- (void)notifyObserversOfUpdateForIcon:(id)a0;
- (void)addObserver:(id)a0;
- (void)cacheImage:(id)a0 forIcon:(id)a1;
- (void)beginObservingIconIfNecessary:(id)a0;
- (id)_iconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 failGracefully:(BOOL)a2 drawing:(id /* block */)a3;
- (void)cacheUnmaskedImagesForIcons:(id)a0;
- (id)realImageForIcon:(id)a0;
- (void)iconImageDidUpdate:(id)a0;
- (id)cachedImageForIcon:(id)a0;
- (id)imageForIcon:(id)a0;
- (void)purgeAllCachedImages;
- (BOOL)_canPoolImage;
- (id)initWithName:(id)a0 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (void)removeObserver:(id)a0;
- (void)cacheImagesForIcons:(id)a0;
- (id)succinctDescription;
- (void)endObservingAllIcons;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_pooledIconImageForIconImage:(id)a0 allowingOptOut:(BOOL)a1;
- (void)cacheImageForIcon:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)purgeCachedImagesForIcons:(id)a0;
- (id)unmaskedImageForIcon:(id)a0;
- (void).cxx_destruct;

@end
