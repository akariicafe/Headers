@class PXScrollViewController, PXTilingController, NSString, PXWidgetBarSpec, NSMutableSet, NSObject, PXBasicTileAnimator, PXWidgetBarLayout;
@protocol PXWidgetBarDelegate, PXAnonymousView;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL view; BOOL viewHeight; BOOL layout; } _needsUpdateFlags;
    struct { BOOL didSelectSubtitle; BOOL didSelectDisclosureAffordance; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (nonatomic, setter=_setViewHeight:) double _viewHeight;
@property (readonly, nonatomic) PXWidgetBarLayout *_layout;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXWidgetBarDelegate> delegate;
@property (readonly, nonatomic) PXTilingController *tilingController;
@property (retain, nonatomic) PXWidgetBarSpec *spec;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)_invalidateLayout;
- (void)_updateLayoutIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)updateView;
- (id)createView;
- (id)initWithScrollViewController:(id)a0;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (id)checkOutTileWithKind:(long long)a0;
- (void)checkInTile:(id)a0;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (void)didSelectSubtitle;
- (void)didSelectDisclosureAffordance;
- (void)invalidateView;
- (void)_updateViewIfNeeded;
- (void)invalidateViewHeight;
- (void)_updateViewHeightIfNeeded;

@end
