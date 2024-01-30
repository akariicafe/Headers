@class TSWPLayout, NSString, TSWPPadding, TSDWrapSegments, TSWPStorage;
@protocol TSWPShapeLayoutDelegate;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding> {
    TSDWrapSegments *_cachedInteriorWrapSegments;
    BOOL _observingStorage;
    TSWPStorage *_observedStorage;
}

@property (readonly, nonatomic) TSWPLayout *containedLayout;
@property (readonly, nonatomic) BOOL autosizes;
@property (weak, nonatomic) id<TSWPShapeLayoutDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
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

- (void)validate;
- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (void)setGeometry:(id)a0;
- (void).cxx_destruct;
- (id)styleProvider;
- (void)invalidatePath;
- (void)invalidateSize;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)interiorClippingPath;
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
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (void)createContainedLayoutForInstructionalText;
- (id)dependentLayouts;
- (id)interiorWrapPath;
- (BOOL)isInvisibleAutosizingShape;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)pathSource;
- (BOOL)providesGuidesForChildLayouts;
- (BOOL)shouldValidate;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (BOOL)descendersCannotClip;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (id)styleProviderForTextLayout:(id)a0;
- (BOOL)wantsToProvideStylesForTextLayout:(id)a0;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (BOOL)parentAutosizes;
- (id)bidirectionalSizeDependentLayouts;
- (id)childInfosForChildLayouts;
- (id)interiorWrapSegments;
- (BOOL)shouldAssertDependenciesAreCorrect;
- (BOOL)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)a0;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;

@end
