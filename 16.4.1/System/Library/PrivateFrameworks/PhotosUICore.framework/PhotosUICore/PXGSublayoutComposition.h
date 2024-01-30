@class PXGSublayoutDataStore, PXGLayout, PXGCompositeLayout;

@interface PXGSublayoutComposition : NSObject {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (nonatomic) long long lastSublayoutDataStoreVersion;
@property (weak, nonatomic) PXGCompositeLayout *compositeLayout;
@property (retain, nonatomic) PXGSublayoutDataStore *sublayoutDataStore;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) long long numberOfSublayouts;
@property (readonly, nonatomic) struct { struct CGSize { double x0; double x1; } x0; double x1; unsigned short x2; struct CGSize { double x0; double x1; } x3; struct { double x0; double x1; double x2; } x4; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } x5; double x6; } *sublayoutGeometries;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;

- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;
- (void)updateSublayoutAttributes;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)invalidateSublayoutContentSizes;
- (long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)a0;
- (void)enumerateSublayoutProvidersForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)invalidateEstimatedSublayoutGeometries;
- (void)invalidateSublayoutAttributes;
- (void)updateEstimate;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)a0 usingSublayoutUpdateBlock:(id /* block */)a1;

@end
