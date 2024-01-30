@interface SBEdgeResizeSystemPointerInteractionHelper : NSObject

+ (id)fancyResizePointerShapeHoveringOverEdge:(unsigned long long)a0 innerLengthOfInteractionRegion:(double)a1 outerLengthOfInteractionRegion:(double)a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3;
+ (unsigned long long)latchingAxesForHoveredEdge:(unsigned long long)a0;
+ (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x0; double x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 innerLengthOfInteractionRegion:(double)a2 outerLengthOfInteractionRegion:(double)a3 cornerLengthOfInteractionRegion:(double)a4 occupiedCorners:(unsigned long long)a5 hoveringOverEdge:(out unsigned long long *)a6 pointerRegion:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;

@end
