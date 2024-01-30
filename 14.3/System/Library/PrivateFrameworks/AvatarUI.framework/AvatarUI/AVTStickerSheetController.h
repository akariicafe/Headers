@class NSString, UICollectionView, AVTStickerSheetModel, UIView, UIImage;
@protocol AVTStickerDisclosureValidationDelegate, AVTStickerSheetControllerDelegate, AVTPresenterDelegate, AVTStickerTaskScheduler, AVTAvatarRecord;

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTObjectViewController>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isPageVisible;
@property (nonatomic) BOOL areAllStickersRendered;
@property (retain, nonatomic) AVTStickerSheetModel *model;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) id<AVTStickerTaskScheduler> taskScheduler;
@property (nonatomic) BOOL showPrereleaseSticker;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (weak, nonatomic) id<AVTStickerSheetControllerDelegate> delegate;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, nonatomic) BOOL allowsPeel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id /* block */)placeholderProvider;
- (double)topPadding;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)discardStickerItems;
- (void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)a0;
- (void)updateItem:(id)a0 withStickerResource:(id)a1 reloadCell:(BOOL)a2;
- (void)scheduleSheetStickerTask:(id /* block */)a0 withIndexPath:(id)a1;
- (void)clearStickerRendererIfNeeded;
- (void)reloadCollectionViewItemForStickerItem:(id)a0;
- (void)sheetWillAppear;
- (void)scheduleSheetPlaceholderTask:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })maxedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumContentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)stickerCellDidTapSticker:(id)a0;
- (void)stickerCellDidPeelSticker:(id)a0;
- (id)initWithStickerSheetModel:(id)a0 taskScheduler:(id)a1 allowsPeel:(BOOL)a2;
- (void)sheetDidDisappear;
- (void)startAllSchedulerTasks;
- (id)firstStickerView;
- (double)numberOfItemsPerRow;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
