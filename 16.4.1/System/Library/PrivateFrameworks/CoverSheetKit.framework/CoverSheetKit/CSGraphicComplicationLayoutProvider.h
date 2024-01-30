@interface CSGraphicComplicationLayoutProvider : NSObject

+ (double)complicationEdgeInset;
+ (long long)_insertionIndexForElement:(id)a0 withExistingElements:(id)a1 proposedInsertionIndex:(long long)a2;
+ (BOOL)canAddElement:(id)a0 toElements:(id)a1;
+ (long long)insertionIndexForElement:(id)a0 withExistingElements:(id)a1;
+ (double)containerEdgeInset;
+ (id)_framesForLayoutElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)complicationContainerHeight;
+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)interComplicationSpacing;
+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 draggedElement:(id)a2 draggedElementPosition:(struct CGPoint { double x0; double x1; })a3;
+ (double)interComplicationSpacingExcludingInnerInset;
+ (double)complicationHeight;

@end
