@interface TSWPFloatingCommentRep : TSWPShapeRep

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)documentRoot;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)forcesPlacementOnTop;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (BOOL)p_shouldDraw;
- (BOOL)modelIsReadOnly;

@end
