@interface PUSectionedTilingLayout : PUTilingLayout {
    long long _numberOfSections;
    struct _PUSectionedTilingLayoutSectionInfo { BOOL x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *_sectionInfos;
    struct _NSRange { unsigned long long location; unsigned long long length; } _computedSections;
    long long _seedSection;
    struct CGPoint { double x; double y; } _seedSectionOrigin;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } computedSections;
@property (nonatomic) BOOL leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } interSectionSpacing;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (struct CGSize { double x0; double x1; })sizeForSection:(long long)a0 numberOfItems:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 scrollPosition:(long long)a1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 section:(long long)a1 toSet:(id)a2;
- (void)prepareLayout;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (long long)_numberOfSections;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForSection:(long long)a0;
- (void)computeSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateSectionInfos;
- (void)invalidateLayoutForUpdateWithItems:(id)a0;
- (BOOL)_scrollsHorizontallyNotVertically;
- (void)_ensureComputedSectionsHaveBeenSeeded;
- (void)_computeSeedSectionIfNeeded;
- (struct _PUSectionedTilingLayoutSectionInfo { BOOL x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)_sectionInfoForSection:(long long)a0;
- (void)_invalidateNumberOfSections;
- (void)_markAllSectionInfosInvalid;

@end
