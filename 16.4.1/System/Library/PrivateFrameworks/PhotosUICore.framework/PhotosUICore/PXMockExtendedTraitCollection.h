@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    PXUpdater *_updater;
}

@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic) long long windowOrientation;
@property (nonatomic) double displayScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long formFactor;
@property (nonatomic) unsigned long long visibleChromeElements;

- (id)initWithViewController:(id)a0;
- (void)unregisterObservations;
- (id)initWithLayoutSizeClass:(long long)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void)_updateSafeAreaInsets;
- (void)_invalidateLayoutSizeClass;
- (void)didPerformChanges;
- (void)_updateLayoutSizeClass;
- (void)registerObservations;
- (long long)layoutSizeSubclass;
- (void)_setNeedsUpdate;
- (id)initWithFormFactor:(long long)a0 orientation:(long long)a1 visibleChromeElements:(unsigned long long)a2;
- (void)_invalidateSafeAreaInsets;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (void).cxx_destruct;

@end
