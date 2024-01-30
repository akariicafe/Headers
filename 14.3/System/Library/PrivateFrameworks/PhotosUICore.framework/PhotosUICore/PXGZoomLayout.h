@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)safeAreaInsetsDidChange;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (id)init;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void).cxx_destruct;
- (id)axSpriteIndexes;
- (void)_configureSublayouts;
- (void)screenScaleDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (void)didChangeSublayoutOrigins;
- (void)_updateSublayoutGeometries;

@end
