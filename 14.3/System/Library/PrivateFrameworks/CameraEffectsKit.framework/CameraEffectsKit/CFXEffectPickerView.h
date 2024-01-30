@class JFXEffectStaticPreviewOptions, NSString, UIImage, JFXEffectPreviewManager;
@protocol CFXEffectPickerViewDelegate, CFXEffectPickerViewDataSource;

@interface CFXEffectPickerView : UIView <UICollectionViewDataSource, JFXEffectPreviewManagerDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) JFXEffectStaticPreviewOptions *staticPreviewOptions;
@property (nonatomic) BOOL previewingIsWaitingForConfiguration;
@property (retain, nonatomic) JFXEffectPreviewManager *previewManager;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic, getter=isContinuousPreviewEnabled) BOOL continuousPreviewEnabled;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (nonatomic, getter=isUsingCameraForContinuousPreview) BOOL useCameraForContinuousPreview;
@property (weak, nonatomic) id<CFXEffectPickerViewDataSource> dataSource;
@property (weak, nonatomic) id<CFXEffectPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)collectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)collectionViewLayout;
- (id)contentView;
- (void)sharedInit;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)configureCell:(id)a0;
- (void)subviewsDidLoad;
- (void)updatePreviewEffectsWhenReloadComplete;
- (void)didScrollCollectionView;
- (void)applyEffectAtCellIndex:(unsigned long long)a0;
- (id)effectPickerNibName;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (void)didSelectItemAtCellIndex:(unsigned long long)a0;
- (void)orientationDidChange;
- (void)didResizeCollectionViewToSize:(struct CGSize { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didResize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })previewSizeInPixels;
- (void)updatePreviewEffects;
- (unsigned long long)effectIndexForCellIndex:(unsigned long long)a0;
- (unsigned long long)numberOfCollectionViewItems;
- (void)effectDidLoadForCell:(id)a0 effect:(id)a1;
- (void)effectPreviewManager:(id)a0 didUpdateContinousPreviewsForEffectIDs:(id)a1;

@end
