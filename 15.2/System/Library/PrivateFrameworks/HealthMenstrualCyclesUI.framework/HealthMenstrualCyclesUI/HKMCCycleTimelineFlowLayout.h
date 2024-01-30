@class NSArray, HKMCCycleTimelinePillConfiguration, NSIndexPath;

@interface HKMCCycleTimelineFlowLayout : UICollectionViewFlowLayout {
    double _yOffset;
    NSArray *_pillConfigurations;
    HKMCCycleTimelinePillConfiguration *_introPillConfiguration;
    double _pillAspectRatio;
    double _centerPillHeight;
    struct CGSize { double width; double height; } _cellSize;
    double _totalZoomWidth;
    NSIndexPath *_centerIndexPath;
    struct _NSRange { unsigned long long location; unsigned long long length; } _zoomRange;
    double _offsetFactor;
    double _zoomAreaOffset;
}

@property (readonly, nonatomic) double configuredWidth;

+ (Class)layoutAttributesClass;

- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureLayoutAttributes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pillFrameAtZoomIndex:(long long)a0;
- (id)_configurationAtIndex:(long long)a0;
- (double)_pillOriginXAtZoomIndex:(long long)a0 centerPill:(BOOL)a1;
- (id)initWithYOffset:(double)a0 pillConfigurations:(id)a1 introPillConfiguration:(id)a2 pillAspectRatio:(double)a3;

@end
