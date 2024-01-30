@class TSCHChartRootLayoutItem, TSCHChartModel, NSArray, TSCHChartInfo;

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent> {
    NSArray *mChildren;
    BOOL mTreeBuilt;
    struct CGSize { double width; double height; } mLayoutSize;
    BOOL mLayoutSizeSet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mDrawingRectCache;
    BOOL mDrawingRectCacheValid;
    struct CGSize { double width; double height; } mMinSizeCache;
    BOOL mMinSizeCacheValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mOverhangRectCache;
    BOOL mOverhangRectCacheValid;
}

@property (readonly, weak, nonatomic) TSCHChartLayoutItem *parent;
@property (readonly, nonatomic) TSCHChartRootLayoutItem *root;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (nonatomic) struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; } layoutSettings;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (nonatomic) struct CGPoint { double x; double y; } layoutOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rootedLayoutRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rootedDrawingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overhangRect;
@property (readonly, nonatomic) BOOL isInResize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } startingSize;
@property (readonly, nonatomic) unsigned long long dataSetIndex;

+ (id)chartLayoutWithChartInfo:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)clearAll;
- (id)description;
- (id)initWithParent:(id)a0;
- (void)clearParent;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)a0;
- (void)layoutUsingMethod:(int)a0;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (id)p_description;
- (void)buildSubTree;
- (void)clearLayoutSize;
- (void)clearDrawingRect;
- (void)clearOverhangRect;
- (BOOL)stopIteratingItemsContainingPoint:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)p_iterateChildrenWithBlock:(id /* block */)a0;
- (void)clearMinSize;
- (struct CGPoint { double x0; double x1; })overhangOffset;
- (struct CGSize { double x0; double x1; })overhangSize;
- (double)overhangMagnitudeForEdge:(unsigned int)a0;

@end
