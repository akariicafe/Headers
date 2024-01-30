@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void)sublayoutNeedsUpdate:(id)a0;
- (void)scrollSpeedRegimeDidChange;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (id)axSpriteIndexes;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)update;
- (long long)scrollableAxis;
- (void)visibleRectDidChange;
- (void)_updateSublayoutGeometries;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didChangeSublayoutOrigins;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)init;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)_configureSublayouts;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void).cxx_destruct;
- (void)viewEnvironmentDidChange;
- (void)screenScaleDidChange;

@end
