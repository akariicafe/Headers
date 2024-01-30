@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {
    unsigned long long mStride;
    float mAngleInDegrees;
    float mAngleInRadians;
}

@property (readonly, nonatomic) unsigned long long stride;

- (void)clearAll;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (id)axisLayoutItem;
- (unsigned long long)numberOfLabelsForAxis:(id)a0;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0 axis:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 usingString:(id)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 useAngle:(BOOL)a4;
- (id)labelsLayoutItem;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (BOOL)showLabelsForAxis:(id)a0;
- (unsigned long long)strideInLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionPathLabelType;
- (struct CGPoint { double x0; double x1; })axisAnchorForPosition:(int)a0 degrees:(float)a1 area:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 unrotatedSize:(struct CGSize { double x0; double x1; })a3 unitSpaceValue:(double)a4;
- (struct CGPoint { double x0; double x1; })labelAnchorForPosition:(int)a0 degrees:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutSpaceRectForAllLabels;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingLabel:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 usingString:(id)a5 stride:(unsigned long long *)a6 useAngle:(BOOL)a7;
- (unsigned long long)p_computeAutoStrideInLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 inLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forIndex:(unsigned long long)a3 paragraphStyle:(id)a4;
- (long long)p_smallestSecondValueLabelIndex:(long long)a0 start:(long long)a1 end:(long long)a2 inLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 paragraphStyle:(id)a4 isTop:(BOOL)a5;
- (long long)p_smallestSecondValueLabelIndex:(long long)a0 start:(long long)a1 end:(long long)a2 inLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 paragraphStyle:(id)a4;
- (id)p_axisFromLayoutItem;
- (id)p_overrideLabelStringForHitTestingEmptyLabel;

@end
