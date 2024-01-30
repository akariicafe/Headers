@class PXAssetVariationRenderResult, NSProgress, UILabel, PXRoundProgressView, PXAssetEditOperationManager, UIView, PXWidgetSpec, NSString, UIColor, PXAssetVariationRenderProvider, PXAssetVariationOption, PXLoadingFailureBadgeView, NSError, UIImage;

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <PXMutableAssetVariationCollectionViewCell, PXChangeObserver, PXAssetEditOperationManagerObserver> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL titleLabel; BOOL variationView; BOOL progressView; BOOL selectedView; BOOL error; BOOL failureView; BOOL renderProgress; } _needsUpdateFlags;
    UILabel *_titleLabel;
    UIView *_backgroundView;
    UIView *_variationView;
    UIView *_selectedDecorationView;
    PXLoadingFailureBadgeView *_failureView;
    PXRoundProgressView *_loadingProgressView;
}

@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setRenderProgress:) NSProgress *_renderProgress;
@property (readonly, nonatomic) PXAssetVariationRenderProvider *renderProvider;
@property (readonly, nonatomic) PXAssetVariationRenderResult *renderResult;
@property (readonly, nonatomic) PXAssetVariationOption *variationOption;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (readonly, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic, getter=isPlaybackAllowed) BOOL playbackAllowed;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIColor *selectedTitleColor;
@property (readonly, nonatomic) double placeholderOverlayAlpha;
@property (readonly, nonatomic) long long assetVariationContentMode;
@property (readonly, nonatomic) double distanceBetweenLastBaselineAndBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;
+ (id)placeholderFiltersWithOverlayWhite:(double)a0;

- (void)setSpec:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)updateError;
- (void)dealloc;
- (void)setRenderResult:(id)a0;
- (void)setEditOperationManager:(id)a0;
- (void)_PXAssetVariationCollectionViewCellCommonInit;
- (id)loadVariationView;
- (void)updateVariationView;
- (struct CGSize { double x0; double x1; })sizeThatFitsPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (double)distanceBetweenPreviewBottomAndLastBaseline;
- (void)_invalidateRenderProgress;
- (void)_updateRenderProgressIfNeeded;
- (void)_invalidateError;
- (void)_updateErrorIfNeeded;
- (void)_invalidateSelectedView;
- (void)_updateSelectedViewIfNeeded;
- (void)_invalidateTitleLabel;
- (void)_updateTitleLabelIfNeeded;
- (void)_invalidateVariationView;
- (void)_updateVariationViewIfNeeded;
- (void)_invalidateProgressView;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateProgressViewIfNeeded;
- (void)_invalidateFailureView;
- (void)_updateFailureViewIfNeeded;
- (void)setPlaybackAllowed:(BOOL)a0;
- (void)prepareForReuse;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)initWithCoder:(id)a0;
- (void)setPlaceholderImage:(id)a0;
- (void)setVariationOption:(id)a0;
- (void)setAssetVariationContentMode:(long long)a0;
- (void)setPlaceholderOverlayAlpha:(double)a0;
- (void)setRenderProvider:(id)a0;
- (void)setSelectedTitleColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationsPerformedOnAsset:(id)a1 context:(void *)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitleColor:(id)a0;

@end
