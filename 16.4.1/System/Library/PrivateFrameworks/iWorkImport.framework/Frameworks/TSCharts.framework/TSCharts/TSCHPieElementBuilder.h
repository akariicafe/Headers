@interface TSCHPieElementBuilder : TSCHElementBuilder

- (unsigned long long)countOfCalloutLinesForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (unsigned long long)countOfElementsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementBounds:(struct CGRect **)a3 outNewClipRects:(struct CGRect **)a4 outNewElementPaths:(const struct CGPath ***)a5 outSelectionKnobLocations:(id *)a6 forHighlightPath:(BOOL)a7;
- (unsigned long long)countOfElementsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementBounds:(struct CGRect **)a3 outNewClipRects:(struct CGRect **)a4 outNewElementPaths:(const struct CGPath ***)a5 outSelectionKnobLocations:(id *)a6 withInnerRadius:(id)a7;
- (unsigned long long)countOfGridLinesInBody:(id)a0 forAxis:(id)a1 minor:(BOOL)a2 outNewLineDescriptors:(struct **)a3;
- (unsigned long long)countOfLabelsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewTransforms:(struct CGAffineTransform **)a3 outNewElementSizes:(struct CGSize **)a4 outNewClipRect:(struct CGRect **)a5 outNewStrings:(id *)a6;
- (BOOL)hasAxisLineInBody:(id)a0 forAxis:(id)a1 outTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 outLine:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } *)a3;
- (struct CGPath { } *)newElementPathInBody:(id)a0 forSeries:(id)a1 outTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outWedgeCenterPoint:(struct CGPoint { double x0; double x1; } *)a5 outSelectionKnobLocations:(id *)a6 withInnerRadius:(id)a7;

@end
