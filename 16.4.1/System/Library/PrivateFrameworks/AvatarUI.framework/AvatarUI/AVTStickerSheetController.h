@class NSString, AVTStickerSheetModel, AVTStickerSheetCollectionView, UIView, UIImage;
@protocol AVTStickerDisclosureValidationDelegate, AVTStickerSheetControllerDelegate, AVTPresenterDelegate, AVTStickerTaskScheduler, AVTAvatarRecord;

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTStickerSheetController>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) AVTStickerSheetCollectionView *collectionView;
@property (nonatomic) BOOL isPageVisible;
@property (nonatomic) BOOL areAllStickersRendered;
@property (retain, nonatomic) AVTStickerSheetModel *model;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) id<AVTStickerTaskScheduler> taskScheduler;
@property (nonatomic) BOOL showPrereleaseSticker;
@property (readonly, nonatomic) BOOL allowsPeel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (weak, nonatomic) id<AVTStickerSheetControllerDelegate> delegate;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

- (double)topPadding;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id /* block */)placeholderProvider;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadView;
- (double)numberOfItemsPerRow;
- (void)sheetWillAppear;
- (void)clearStickerRendererIfNeeded;
- (void)discardStickerItems;
- (id)firstStickerView;
- (id)initWithStickerSheetModel:(id)a0 taskScheduler:(id)a1 allowsPeel:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })maxedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumContentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)reloadCollectionViewItemForStickerItem:(id)a0;
- (void)scheduleSheetPlaceholderTask:(id /* block */)a0;
- (void)scheduleSheetStickerTask:(id /* block */)a0 withIndexPath:(id)a1;
- (void)sheetDidDisappear;
- (void)startAllSchedulerTasks;
- (void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)a0;
- (void)stickerCellDidPeelSticker:(id)a0;
- (void)stickerCellDidTapSticker:(id)a0;
- (void)updateItem:(id)a0 withStickerResource:(id)a1 reloadCell:(BOOL)a2;

@end
