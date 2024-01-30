@class TSDLayoutGeometry, NSString, TSDPathSource;

@interface TSACaptionLayout : TSWPShapeLayout <TSDWrappable, TSTTablePartitionerParticipating> {
    TSDPathSource *_layoutPathSource;
}

@property (readonly, nonatomic) BOOL hasAlpha;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDraggable;
- (void)validate;
- (void)setParent:(id)a0;
- (BOOL)autosizes;
- (void).cxx_destruct;
- (void)invalidatePath;
- (void)invalidate;
- (BOOL)supportsRotation;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (id)computeLayoutGeometry;
- (void)processChangedProperty:(int)a0;
- (BOOL)allowsConnections;
- (BOOL)isInGroup;
- (id)dependentLayouts;
- (BOOL)shouldValidate;
- (id)reliedOnLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)pathSource;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (id)reliedOnLayoutsForTextLayout:(id)a0;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (id)p_parentLayout;
- (struct CGSize { double x0; double x1; })p_sizeForProposedSize:(struct CGSize { double x0; double x1; })a0 zeroSize:(struct CGSize { double x0; double x1; })a1;
- (id)p_captionLayout;
- (id)p_titleLayout;
- (BOOL)p_textIsCompletelyOverflowed;
- (struct CGPoint { double x0; double x1; })p_pointInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAnchorLocation:(long long)a1;
- (struct CGPoint { double x0; double x1; })offsetForPlacement:(id)a0;
- (id)p_parentInfo;
- (BOOL)isDynamicallyChangingAvailableSpaceForContainedChild;
- (id)p_titleInfo;
- (id)p_captionInfo;
- (BOOL)participatesInLastRowHeight;
- (BOOL)supportsParentFlipping;
- (BOOL)wantsNormalLayoutDuringDynamicRotation;

@end
