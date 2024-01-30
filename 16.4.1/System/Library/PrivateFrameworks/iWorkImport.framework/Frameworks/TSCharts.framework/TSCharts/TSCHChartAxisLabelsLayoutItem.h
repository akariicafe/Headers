@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {
    unsigned long long _stride;
    float _angleInDegrees;
    float _angleInRadians;
}

@property struct CGSize { double width; double height; } maxLabelSizeInPoints;
@property (readonly, nonatomic) unsigned long long stride;
@property (nonatomic) double distanceFromAxis;

- (void)clearAll;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })labelAnchorForPosition:(int)a0 degrees:(float)a1;
- (unsigned long long)p_computeCircularAutoStrideForInvariantAngleLabelsInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (struct CGPoint { double x0; double x1; })axisAnchorForPosition:(int)a0 degrees:(float)a1 inLayoutSize:(struct CGSize { double x0; double x1; })a2 unrotatedSize:(struct CGSize { double x0; double x1; })a3 unitSpaceValue:(double)a4;
- (id)axisLayoutItem;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (id)labelsLayoutItem;
- (id)layoutSpaceHalosForAllLabels;
- (id)layoutSpaceKnobsForAllLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutSpaceRectForAllLabels;
- (const struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (unsigned long long)numberOfLabelsForAxis:(id)a0;
- (id)p_axis;
- (id)p_axisFromLayoutItem;
- (void)p_calcMaxLabelSize;
- (id)p_chartInfoFromLayoutItem;
- (id)p_chartModelFromLayoutItem;
- (BOOL)p_circularStridingLabelAtIndex:(unsigned long long)a0 inLayoutSize:(struct CGSize { double x0; double x1; })a1 intersectsLabelAtIndex:(unsigned long long)a2 extraTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (unsigned long long)p_computeAutoStrideInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)p_computeCircularAutoStrideForLabelDimensionPerpendicularOnSpoke:(double)a0 inLayoutSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)p_computeCircularAutoStrideInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)p_computeLinearAutoStrideInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_enumerateAxisLabelRectsWithBlock:(id /* block */)a0;
- (long long)p_labelBaselineDirectionRelativeToSpoke;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForAxisLabelWithInfo:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForCartesianAxisLabelWithInfo:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForLabel:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inLayoutSize:(struct CGSize { double x0; double x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 usingString:(id)a5 stride:(unsigned long long *)a6 useAngle:(BOOL)a7;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForLabel:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inLayoutSize:(struct CGSize { double x0; double x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 usingString:(id)a5 useAngle:(BOOL)a6;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForPolarAngleAxisLabelWithInfo:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForPolarAxisLabelWithInfo:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_localTransformForPolarRadiusAxisLabelWithInfo:(id)a0;
- (unsigned long long)p_numberOfAxisLabels;
- (id)p_overrideLabelStringForHitTestingEmptyLabel;
- (struct CGPoint { double x0; double x1; })p_pointWithLowerYOfPoint:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1 whenTransformedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)p_rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 inLayoutSize:(struct CGSize { double x0; double x1; })a2 forIndex:(unsigned long long)a3 paragraphStyle:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_rectOfCircularStridingLabelAtIndex:(unsigned long long)a0 inLayoutSize:(struct CGSize { double x0; double x1; })a1 extraTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (struct CGPoint { double x0; double x1; })p_relativeAnchorMidpointForLabelGeometry:(id)a0;
- (struct CGPoint { double x0; double x1; })p_relativeAnchorPointForLabelGeometry:(id)a0 useMidpoints:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_rootedTransformFromLocalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (long long)p_smallestSecondValueLabelIndex:(long long)a0 start:(long long)a1 end:(long long)a2 inLayoutSize:(struct CGSize { double x0; double x1; })a3 paragraphStyle:(id)a4;
- (long long)p_smallestSecondValueLabelIndex:(long long)a0 start:(long long)a1 end:(long long)a2 inLayoutSize:(struct CGSize { double x0; double x1; })a3 paragraphStyle:(id)a4 isTop:(BOOL)a5;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForLabelWithPaddingPerSide:(double)a0 outwardOrigin:(struct CGPoint { double x0; double x1; })a1 outwardDirection:(struct CGPoint { double x0; double x1; })a2 boundaryPosition:(struct CGPoint { double x0; double x1; })a3 boundaryNormal:(struct CGPoint { double x0; double x1; })a4 alignWithMaxSizeAtClosestMidpoint:(BOOL)a5 anchorMaxSizeAtClosestMidpoint:(BOOL)a6 info:(id)a7;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformWithOrigin:(struct CGPoint { double x0; double x1; })a0 verticalDirection:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0 axis:(id)a1;
- (id)selectionPathLabelType;
- (BOOL)showLabelsForAxis:(id)a0;
- (unsigned long long)snappedLabelAngleInDegree:(float)a0;
- (unsigned long long)strideInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 usingString:(id)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 useAngle:(BOOL)a4;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;

@end
