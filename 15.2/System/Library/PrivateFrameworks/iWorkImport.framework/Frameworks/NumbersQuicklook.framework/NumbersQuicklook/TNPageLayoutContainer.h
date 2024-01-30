@class TSWPPadding, NSString, TNPageContentLayout, TNAdditionalPageContentLayout;

@interface TNPageLayoutContainer : TNPageLayoutAbstract <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>

@property (retain) TNAdditionalPageContentLayout *overlayContentLayout;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly) TNPageContentLayout *contentLayout;
@property (readonly) BOOL pageLayoutDirectionIsRTL;
@property (readonly, nonatomic) BOOL wantsOverlayContentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

- (void)setChildren:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bodyRect;
- (unsigned long long)pageCount;
- (void)addChild:(id)a0;
- (struct CGColor { } *)backgroundColor;
- (void).cxx_destruct;
- (unsigned long long)pageNumber;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (void)invalidateSize;
- (void)updateChildrenFromInfo;
- (BOOL)textIsVertical;
- (void)parentDidChange;
- (id)dependentLayouts;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3;
- (BOOL)descendersCannotClip;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (id)initWithPageController:(id)a0 pageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (Class)contentLayoutClassOverride;
- (id)printableInfoProvider;
- (void)performBlockForEachHeaderFooterLayout:(id /* block */)a0;
- (void)_updateOverlayContentLayout;
- (void)_removeOverlayContentLayout;
- (void)_addOverlayContentLayout;
- (id)p_pageInfo;
- (BOOL)hasValidatedHeadersAndFooters;
- (id)headerFooterProvider;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (BOOL)containsLayoutForInfo:(id)a0;

@end
