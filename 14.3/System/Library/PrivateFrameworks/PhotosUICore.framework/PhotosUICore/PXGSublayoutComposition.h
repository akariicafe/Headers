@class PXGSublayoutDataStore, PXGLayout, PXGCompositeLayout;

@interface PXGSublayoutComposition : NSObject {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
}

@property (nonatomic) long long lastSublayoutDataStoreVersion;
@property (weak, nonatomic) PXGCompositeLayout *compositeLayout;
@property (retain, nonatomic) PXGSublayoutDataStore *sublayoutDataStore;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) long long numberOfSublayouts;
@property (readonly, nonatomic) struct { struct CGSize { double x0; double x1; } x0; unsigned short x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } x4; double x5; } *sublayoutGeometries;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;

- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;
- (void)updateSublayoutAttributes;
- (void)updateEstimate;
- (void)enumerateSublayoutProvidersForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)invalidateSublayoutAttributes;
- (void)invalidateSublayoutContentSizes;
- (void)invalidateEstimatedSublayoutGeometries;
- (long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)a0;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)a0 usingSublayoutUpdateBlock:(id /* block */)a1;
- (void)updateEstimatedSublayoutGeometries;

@end
