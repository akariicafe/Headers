@class NSString, UICollectionView, UICollectionViewDiffableDataSource, PDFThumbnailView, NSCache;

@interface PDFThumbnailsCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, PDFThumbnailCollectionViewInterface> {
    PDFThumbnailView *_thumbnailView;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSCache *_cache;
}

@property (nonatomic) BOOL allowsPageReordering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)currentPage;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)makeDatasource;
- (void)configureCell:(id)a0 withPage:(id)a1 indexPath:(id)a2;
- (void)movePageWithTransaction:(id)a0;
- (id)cachedImageForPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2;
- (void)loadImageWithPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2 completionHandler:(id /* block */)a3;
- (id)contextMenuForPage:(id)a0;
- (id)cacheKeyForPage:(id)a0;
- (id)imageDrawingQueue;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2;
- (void)updateCacheForPage:(id)a0 withImage:(id)a1;
- (void)_selectAndScrollToCurrentPageIfNeeded;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0 displayBox:(long long)a1;
- (void)applySnapshotWithAnimation:(BOOL)a0;
- (void)_updateScrubber;
- (void)pageChanged:(id)a0;
- (void)_reloadPage:(id)a0;
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)a0;
- (id)previewForCollectionView:(id)a0 contextMenuConfiguration:(id)a1;
- (id)defaultContextMenuForPage:(id)a0;
- (void)movePage:(id)a0 toIndex:(unsigned long long)a1;
- (id)initFromThumbnailView:(id)a0;
- (void)updateIconsImages;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)currentPageChanged:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0;

@end
