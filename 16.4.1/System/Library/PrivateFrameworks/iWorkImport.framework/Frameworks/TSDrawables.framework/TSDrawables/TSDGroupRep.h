@class NSArray, NSOrderedSet, NSMapTable;

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLastBoundsForStandardKnobs;
    NSOrderedSet *mCachedGroupedChildReps;
    NSMapTable *mChildKnobToRepMap;
}

@property (readonly, nonatomic) NSArray *allRepsContainedInGroup;

- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (void)recursivelyDrawInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvasForMarqueeSelecting;
- (id)p_groupInfo;
- (id)p_groupedChildReps;
- (id)p_nonGroupedChildReps;

@end
