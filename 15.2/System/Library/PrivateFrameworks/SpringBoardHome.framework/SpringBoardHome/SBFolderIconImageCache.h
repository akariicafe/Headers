@class NSString, NSMapTable, UIImage, SBHIconImageCache, CPMemoryPool;
@protocol SBIconListLayout;

@interface SBFolderIconImageCache : NSObject <SBFolderIconObserver, SBFolderObserver, SBHIconImageCacheObserver, SBFolderIconGridCellImageProvider> {
    NSMapTable *_folderIconObservers;
    NSMapTable *_cachedFolderImages;
    NSMapTable *_cachedMiniGridImages;
    UIImage *_genericMiniGridImage;
}

@property (readonly, nonatomic) CPMemoryPool *pool;
@property (readonly, nonatomic) CPMemoryPool *miniGridImagePool;
@property (readonly, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageForPageAtIndex:(unsigned long long)a0 inFolderIcon:(id)a1 listLayout:(id)a2 gridCellImageProvider:(id)a3 pool:(id)a4;
+ (BOOL)drawTreatmentForIcon:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIconImage:(id)a1;
+ (BOOL)needsTreatmentForIcon:(id)a0;
+ (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIcon:(id)a1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;

- (void)folder:(id)a0 didAddList:(id)a1;
- (void)iconImageCache:(id)a0 didUpdateImageForIcon:(id)a1;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (void)folder:(id)a0 didMoveList:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)removeObserver:(id)a0 forFolderIcon:(id)a1;
- (void)informObserversOfUpdateForFolderIcon:(id)a0;
- (id)initWithListLayout:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)cacheGridCellImagesForIcons:(id)a0;
- (void).cxx_destruct;
- (void)folderIcon:(id)a0 containedIconImageDidUpdate:(id)a1;
- (id)init;
- (void)folder:(id)a0 didMoveIcon:(id)a1;
- (void)folderIcon:(id)a0 containedIconLaunchEnabledDidChange:(id)a1;
- (void)updateCachedImagesForFolderIcon:(id)a0 afterChangeToContainedForIcon:(id)a1 imageUpdated:(BOOL)a2 treatmentsOnly:(BOOL)a3;
- (id)gridCellImageForIcon:(id)a0;
- (id)imageForPageAtIndex:(unsigned long long)a0 inFolderIcon:(id)a1;
- (id)genericMiniGridImage;
- (void)addObserver:(id)a0 forFolderIcon:(id)a1;
- (void)folderIcon:(id)a0 containedIconAccessoriesDidUpdate:(id)a1;
- (void)rebuildImagesForFolderIcon:(id)a0;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIcon:(id)a1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;

@end
