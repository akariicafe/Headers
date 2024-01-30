@class TSWPLayout, TSWPPadding, NSString, TSDWrapSegments, TSWPStorage;
@protocol TSWPShapeLayoutDelegate;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver> {
    TSDWrapSegments *_cachedInteriorWrapSegments;
    BOOL _observingStorage;
    TSWPStorage *_observedStorage;
}

@property (readonly, nonatomic) TSWPLayout *containedLayout;
@property (readonly, nonatomic) BOOL autosizes;
@property (weak, nonatomic) id<TSWPShapeLayoutDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeometry:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)validate;
- (void)invalidatePath;
- (id)initWithInfo:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (BOOL)textLayoutShouldLayoutVertically:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)textWrapper;
- (void)invalidateSize;
- (void)updateChildrenFromInfo;
- (id)interiorClippingPath;
- (void)processChangedProperty:(int)a0;
- (id)dependentLayouts;
- (BOOL)shouldValidate;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (BOOL)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)interiorWrapPath;
- (id)pathSource;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (BOOL)isInvisibleAutosizingShape;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransformForInfoGeometry:(id)a0;
- (struct CGPoint { double x0; double x1; })autosizePositionOffsetForFixedWidth:(BOOL)a0 height:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })autosizePositionOffset;
- (BOOL)descendersCannotClip;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (struct CGSize { double x0; double x1; })adjustedInsetsForTarget:(id)a0;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)a0;
- (id)interiorWrapSegments;
- (BOOL)parentAutosizes;
- (id)childInfosForChildLayouts;
- (id)bidirectionalSizeDependentLayouts;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;
- (BOOL)shouldAssertDependenciesAreCorrect;

@end
