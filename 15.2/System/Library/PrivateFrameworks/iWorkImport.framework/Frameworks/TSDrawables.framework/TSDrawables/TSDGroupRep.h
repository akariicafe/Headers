@class NSArray, NSOrderedSet;

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLastBoundsForStandardKnobs;
    NSOrderedSet *mCachedGroupedChildReps;
}

@property (readonly, nonatomic) NSArray *allRepsContainedInGroup;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (void)recursivelyDrawInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (id)p_groupedChildReps;
- (id)p_groupInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvasForMarqueeSelecting;
- (id)p_nonGroupedChildReps;

@end
