@class TSWPLayout, TSWPPadding, TSDWrapPolygon;
@protocol TSWPShapeLayoutDelegate;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {
    TSDWrapPolygon *_cachedInteriorWrapPolygon;
    BOOL _observingStorage;
}

@property (readonly, nonatomic) TSWPLayout *containedLayout;
@property (readonly, nonatomic) BOOL autosizes;
@property id<TSWPShapeLayoutDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedInsets;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

- (void)setGeometry:(id)a0;
- (BOOL)supportsRotation;
- (void)addChild:(id)a0;
- (void)dealloc;
- (void)setChildren:(id)a0;
- (id)children;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)invalidatePath;
- (id)initWithInfo:(id)a0;
- (unsigned int)autosizeFlagsForTextLayout:(id)a0;
- (unsigned int)verticalAlignmentForTextLayout:(id)a0;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (BOOL)textLayoutShouldLayoutVertically:(id)a0;
- (BOOL)allowsLastLineTruncation:(id)a0;
- (unsigned int)maxLineCountForTextLayout:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (id)textWrapper;
- (void)invalidateSize;
- (id)interiorWrapPolygon;
- (void)updateChildrenFromInfo;
- (id)interiorClippingPath;
- (void)processChangedProperty:(int)a0;
- (void)replaceChild:(id)a0 with:(id)a1;
- (id)childSearchTargets;
- (id)dependentLayouts;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (void)insertChild:(id)a0 below:(id)a1;
- (void)insertChild:(id)a0 above:(id)a1;
- (id)interiorWrapPath;
- (id)pathSource;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (BOOL)isInvisibleAutosizingShape;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (id)instructionalStorageForContainedStorage:(id)a0 storageKind:(int)a1;
- (void)destroyContainedLayoutForInstructionalText;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransformForInfoGeometry:(id)a0;
- (struct CGPoint { double x0; double x1; })autosizePositionOffsetForFixedWidth:(BOOL)a0 height:(BOOL)a1;
- (unsigned int)cropLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1;
- (struct CGPoint { double x0; double x1; })autosizePositionOffset;

@end
