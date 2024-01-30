@class PXCArrayStore, PXExploreLayoutGenerator;

@interface PXStoryGridTimeline : PXStoryDerivedTimeline {
    long long *_assetClipIdentifiers;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_assetClipGeometries;
    long long _numberOfAssetClips;
    PXCArrayStore *_rectsStore;
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) PXExploreLayoutGenerator *layoutGenerator;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithIdentifier:(long long)a0;
- (id)initWithOriginalTimeline:(id)a0;
- (id)initWithOriginalTimeline:(id)a0 layoutSpec:(id)a1 viewportSize:(struct CGSize { double x0; double x1; })a2;

@end
