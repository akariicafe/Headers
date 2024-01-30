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

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (void)addChild:(id)a0;
- (void)setChildren:(id)a0;
- (void)setGeometry:(id)a0;
- (id)children;
- (void)invalidatePath;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)supportsRotation;
- (void)invalidateSize;
- (unsigned int)verticalAlignmentForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (BOOL)allowsLastLineTruncation:(id)a0;
- (unsigned int)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)interiorClippingPath;
- (id)interiorWrapPolygon;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (unsigned int)maxLineCountForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (void)processChangedProperty:(int)a0;
- (Class)repClassForTextLayout:(id)a0;
- (BOOL)textLayoutShouldLayoutVertically:(id)a0;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)createContainedLayoutForEditing;
- (struct CGPoint { double x0; double x1; })autosizePositionOffset;
- (struct CGPoint { double x0; double x1; })autosizePositionOffsetForFixedWidth:(BOOL)a0 height:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransformForInfoGeometry:(id)a0;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)childSearchTargets;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (void)createContainedLayoutForInstructionalText;
- (unsigned int)cropLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1;
- (id)dependentLayouts;
- (void)destroyContainedLayoutForInstructionalText;
- (void)insertChild:(id)a0 above:(id)a1;
- (void)insertChild:(id)a0 below:(id)a1;
- (id)instructionalStorageForContainedStorage:(id)a0 storageKind:(int)a1;
- (id)interiorWrapPath;
- (BOOL)isInvisibleAutosizingShape;
- (id)pathSource;
- (void)replaceChild:(id)a0 with:(id)a1;
- (BOOL)resizeMayChangeAspectRatio;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;

@end
