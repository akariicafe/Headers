@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    PXUpdater *_updater;
}

@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic) double displayScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long formFactor;
@property (nonatomic) unsigned long long visibleChromeElements;

- (void)unregisterObservations;
- (void)_updateSafeAreaInsets;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void)registerObservations;
- (long long)layoutSizeSubclass;
- (void)_invalidateLayoutSizeClass;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (id)initWithLayoutSizeClass:(long long)a0;
- (id)initWithFormFactor:(long long)a0 orientation:(long long)a1 visibleChromeElements:(unsigned long long)a2;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (void)_invalidateSafeAreaInsets;
- (id)initWithViewController:(id)a0;
- (void)_updateLayoutSizeClass;

@end
